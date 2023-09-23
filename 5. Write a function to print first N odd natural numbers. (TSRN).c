//5. Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
#include<conio.h>
void oddnatural(int);
main()
{
	int number;
	printf("\n Enter the number = ");
	scanf("%d",&number);
	oddnatural(number);
	getch();
}
void oddnatural(int number)
{
	int i;
	printf("\n Answer = ");
	for(i=1;i<=number*2;i+=2)
	{
		printf("%d,",i);		
	}
}
