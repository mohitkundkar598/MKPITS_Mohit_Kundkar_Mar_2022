#include<stdio.h>
#include<conio.h>
void mult();
void main()
{
	mult();
}
void mult()
{
int n1,n2,res;
printf("enter any two num:");
scanf("%d %d" ,&n1, &n2);
res=n1*n2;
printf("mult=%d",res);
getch();
}
