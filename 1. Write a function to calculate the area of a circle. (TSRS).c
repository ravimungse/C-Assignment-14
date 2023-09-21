//1. Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
#include<conio.h>
float area(float r);
int main()
{
	float r,a;
	printf("\n Enter the Radius of circle = ");
	scanf("%g",&r);
	a=area(r);
	printf("\n area of circle = %g",a);
	getch();
}
float area(float r)
{
	r=r*r;
	r=(3.14)*r;
	return r;
}
