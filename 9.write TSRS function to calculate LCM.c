//9. Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
#include<conio.h>
int lcm(int,int);
main()
{
	int num1,num2,answer;
	printf("\n Enter the number 1 = ");
	scanf("%d",&num1);
	printf("\n Enter the number 2 = ");
	scanf("%d",&num2);
	answer=lcm(num1,num2);
	printf("\n LCM = %d",answer);
}
int lcm (int num1,int num2)
{
	int l;
	for(l=1;l<=num1*num2;l++)
	{
		if(l%num1==0&&l%num2==0)
		{
			return l;
		}
	}
}
