//3. Write a function to check whether a given number is even or odd. Return 1 if the
//number is even, otherwise return 0. (TSRS)
#include<stdio.h>
#include<conio.h>
int check(int);
main()
{
	int number,odd,even,answer;
	printf("\n Enter the Number = ");
	scanf("%d",&number);
	answer=check(number);
	if(answer==1)
	printf("\n Entered Number is Even Number ");
	else if(answer==0)
	printf("\n Entered Number is Odd Number ");
	getch();
}
int check(number)
{
	if(number%3)
	return 0; // for odd number
	else if(number%2)
	return 1; // for even number
}
