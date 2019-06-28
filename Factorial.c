#include<stdio.h>
#include<conio.h>
int fact(int n)
{
     if (n==1||n==0)
	return 1
     else
        return (n*facr(n-1))
} 	
void main()
{
	int num,res;
	clrscr();
	scanf("Enter the Number %d",&num);
	res=fact(n);
	printf("Factorial : %d",res);
	getch();
{
