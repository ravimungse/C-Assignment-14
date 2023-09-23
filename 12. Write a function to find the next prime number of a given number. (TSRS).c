//12. Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>
#include<conio.h>
int nextprime(int);
main()
{
	int number,answer;
	printf("\n Enter the number = ");
	scanf("%d",&number);
	answer=nextprime(number);
	printf("\n Next prime number is = %d",answer);
	getch();
}
int nextprime(int number)
{
	int i=1;
	while(number)
	{
		number++;
		for(i=1;i<number;i++)
		{
			if(number%i==0)
			{	
				break;	
			}
		}
	return number;
	}
}
