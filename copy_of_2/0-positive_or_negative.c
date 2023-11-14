/**
 * main - entry point 
 * 
 * @x: value that entered
 * 
 * Return: 0 
*/
#include<stdio.h>
int main(void)
{
int x;
scanf("%d", &x);
if (x > 0){
printf("%d is positive", x);
}
else if(x < 0){
printf("%d is negative", x);
}
else 
printf("%d is zero", x);
return (0);
}
