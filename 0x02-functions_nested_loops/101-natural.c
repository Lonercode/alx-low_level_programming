#include "main.h"
#include <stdio.h>
/**
 * main - Sum of multiples of 3 and 5
 *
 * Return: 0(success)
 */

int main(void)
{
int n = 0;
int sum;
for(n; n<=1024; n++){
if ((n % 5 )==0 || (n % 3) == 0){
sum = n+=n;      
}   
}
printf("%d\n",sum);
return (0);
}
