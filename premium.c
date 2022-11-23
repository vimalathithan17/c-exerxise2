//yearly premium calculation
#include<stdio.h>
void main()
{
	char gender,accidents;
	float premium,payable;
	printf("enter your gender('m' for male and'f' for female):");
	fflush(stdin);
	scanf("%c",&gender);
	printf("have you met with an accidents in the previous year(y/n):");
	fflush(stdin);
	scanf("%c",&accidents);
	printf("enter your yearly premium(in Rs):");
	scanf("%f",&premium);
	payable=premium;
	if (accidents=='n')
	{
		payable=premium-(premium*0.3);
	}
	if(gender=='f')
	{
		payable-=premium*0.05;
	}
	printf("your yearly premiu (payable):%fRs",payable);
}
