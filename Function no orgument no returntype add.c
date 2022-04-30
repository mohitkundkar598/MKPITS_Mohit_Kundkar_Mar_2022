#include<stdio.h>
#include<conio.h>
void add();
void main()
{
	add();
}
void add()
{
int n1,n2,res;
printf("enter any two num:");
scanf("%d %d" ,&n1, &n2);
res=n1+n2;
printf("add=%d",res);
getch();
}
