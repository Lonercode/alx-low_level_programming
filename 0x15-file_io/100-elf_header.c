#include "main.h"
#include <elf.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * main - Shows information in ELF header.
 * @argc: input
 * @argv: input
 *
 * Return: 0 (success)
 *
 * Description: Exit code 98 - Function fails or file not ELF
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
Elf64_Ehdr *head;
int i, j;

i = open(argv[1], O_RDONLY);
if (i == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}
head = malloc(sizeof(Elf64_Ehdr));
if (head == NULL)
{
close_elf(i);
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}
j = read(i, header, sizeof(Elf64_Ehdr));
if (j == -1)
{
free(head);
close_elf(i);
dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
exit(98);
}
check_elf(header->e_ident);
printf("ELF Header:\n");
print_magic(header->e_ident);
print_class(header->e_ident);
print_data(header->e_ident);
print_version(header->e_ident);
print_osabi(header->e_ident);
print_abi(header->e_ident);
print_type(header->e_type, header->e_ident);
print_entry(header->e_entry, header->e_ident);

free(head);
close_elf(i);
return (0);
}


/**
 * check_elf - Is file an ELF file?
 * @e_ident: input
 *
 * Description: Exit code 98 - File not exist/ not ELF file
 */
void check_elf(unsigned char *e_ident)
{
int k;

for (k = 0; k < 4; k++)
{
if (e_ident[k] != 127 && e_ident[k] != 'E' && e_ident[k] != 'L' && e_ident[k] != 'F')
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98);
}
}
}

/**
 * print_magic - Shows ELF header magic nums
 * @e_ident: input
 *
 * Description: Magic numbers...
 */
void print_magic(unsigned char *e_ident)
{
int l;

printf(" Magic_Num: ");

for (l = 0; l < EI_NIDENT; l++)
{
printf("%02x", e_ident[l]);
if (l == EI_NIDENT - 1)
{
	printf("\n");
}
else
{
	printf(" ");
}
}
}

/**
 * print_class - Shows ELF header class
 * @e_ident: input
 * 
 * Description: ELF header class
 */
void print_class(unsigned char *e_ident)
{
printf(" ELF_Class:  ");

switch (e_ident[EI_CLASS])
{
case ELF_CLASS_NONE:
	printf("none\n");
	break;
case ELF_CLASS_32:
	printf("ELF32\n");
	break;
case ELF_CLASS_64:
	printf("ELF64\n");
	break;
default:
	printf("<unknown_class: %x>\n", e_ident[EI_CLASS]);
}
}

/**
 * print_data - Shoes ELF header data
 * @e_ident: input
 * 
 * Description: ELF header data
 */
void print_data(unsigned char *e_ident)
{
printf(" Data: ");

switch (e_ident[EI_DATA])
{
case ELF_DATA_NONE:
	printf("none\n");
	break;
case ELF_DATA_2LSB:
	printf("2's complement, little endian\n");
	break;
case ELF_DATA_2MSB:
	printf("2's complement, big endian\n");
	break;
default:
	printf("<unknown_data: %x>\n", e_ident[EI_CLASS]);
}
}

/**
 * print_version - Shows ELF header version
 * @e_ident: input
 * 
 * Description: ELF header version printed
 */
void print_version(unsigned char *e_ident)
{
printf(" Version: %d", e_ident[EI_VERSION]);

switch (e_ident[EI_VERSION])
{
case EV_CURRENT:
	printf(" (current_version)\n");
	break;
default:
	printf("\n");
	break;
}
}

/**
 * print_osabi - Prints the OS/ABI of an ELF header
 * @e_ident: input
 * 
 * Description: ELF header OS/ABI
 */
void print_osabi(unsigned char *e_ident)
{
printf("  OS/ABI:                            ");

switch (e_ident[EI_OSABI])
{
case ELF_OSABI_NONE:
	printf("UNIX - System V\n");
	break;
case ELF_OSABI_HPUX:
	printf("UNIX - HP-UX\n");
	break;
case ELF_OSABI_NETBSD:
	printf("UNIX - NetBSD\n");
	break;
case ELF_OSABI_LINUX:
	printf("UNIX - Linux\n");
	break;
case ELF_OSABI_SOLARIS:
	printf("UNIX - Solaris\n");
	break;
case ELF_OSABI_IRIX:
	printf("UNIX - IRIX\n");
	break;
case ELF_OSABI_FREEBSD:
	printf("UNIX - FreeBSD\n");
	break;
case ELF_OSABI_TRU64:
	printf("UNIX - TRU64\n");
	break;
case ELF_OSABI_ARM:
	printf("ARM\n");
	break;
case ELF_OSABI_STANDALONE:
	printf("Standalone App\n");
	break;
default:
	printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}
}

/**
 * print_abi - Shows ABI version of ELF header
 * @e_ident: input
 */
void print_abi(unsigned char *e_ident)
{
printf("ABI Version: %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * print_type - Shows ELF header type
 * @e_type: input
 * @e_ident: input
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
if (e_ident[EI_DATA] == ELFDATA2MSB)
	e_type >>= 8;

printf(" Type: ");

switch (e_type)
{
case ET_NONE:
	printf("NONE (None)\n");
	break;
case ET_REL:
	printf("REL (Relocatable file)\n");
	break;
case ET_EXEC:
	printf("EXEC (Executable file)\n");
	break;
case ET_DYN:
	printf("DYN (Shared object file)\n");
	break;
case ET_CORE:
	printf("CORE (Core file)\n");
	break;
default:
	printf("<unknown_type: %x>\n", e_type);
}
}

/**
 * print_entry - Shows entry point of ELF header
 * @e_entry: input
 * @e_ident: input
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
printf("Entry point address:   ");

if (e_ident[EI_DATA] == ELFDATA2MSB)
{
	e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
	e_entry = (e_entry << 16) | (e_entry >> 16);
}

if (e_ident[EI_CLASS] == ELFCLASS32)
	printf("%#x\n", (unsigned int)e_entry);

else
	printf("%#lx\n", e_entry);
}

/**
 * close_elf - Closes file
 * @elf: input
 *
 */
void close_elf(int elf)
{
if (close(elf) == -1)
{
	dprintf(STDERR_FILENO,
		"Error: Can't close f %d\n", elf);
	exit(98);
}
}


