//4. Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
#include<conio.h>
void natural();
main()
{
	int n;
	printf("\n Enter the Number to printf = ");
	scanf("%d",&n);
	natural(n);
	getch();
}
void natural(int n)
{
	int i=1;
	printf("\n Answer: ");
	for(i=1;i<=n;i++)
	{
		printf("%d,
		",i);
	}
}

