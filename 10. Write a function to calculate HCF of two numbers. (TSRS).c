//10. Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
#include<conio.h>
main()
{
	int num1,num2,answer;
	printf("\n Enter num 1 = ");
	scanf("%d",&num1);
	printf("\n Enter num 2 = ");
	scanf("%d",&num2);
	answer=hcf(num1,num2);
	printf("\n HCF = %d",answer);
	getch();
}
int hcf(int num1,int num2)
{
	int a;
	(num1>num2)?(a=num2-1):(a=num1-1);
	while(a>=1)
	{
		if(num1%a==0&&num2%a==0)
		{
			return a;
		}
		a--;
	}
}
