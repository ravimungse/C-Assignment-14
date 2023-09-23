//6. Write a function to calculate the factorial of a number.(TSRS)
#include<stdio.h>
#include<conio.h>
int factorial(int);
main()
{
	int number,answer;
	printf("\n Enter the Number = ");
	scanf("%d",&number);
	answer=factorial(number);
	printf("\n Factorial = %d",answer);
	getch();
}
int factorial(int number)
{
	int increase=1,multiply=1;
	while(increase<=number)
	{
		multiply=multiply*increase;
		increase++;
	}
	return multiply;
}
