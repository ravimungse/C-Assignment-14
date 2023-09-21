//2. Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
#include<conio.h>
float simple(float,float,float);
int main()
{
	float p,r,t;
	printf("\n Enter the principle amount = ");
	scanf("%g",&p);
	printf("\n Enter the interest Rate = ");
	scanf("%g",&r);
	printf("\n Enter the Time in years = ");
	scanf("%g",&t);
	
	float a=simple(p,r,t);
	printf("\n Simple Interest = %g",a);
	getch();
}
float simple(float p,float r, float t)
{
	return p*r*t/100;	
}
