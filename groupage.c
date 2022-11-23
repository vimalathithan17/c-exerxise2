//output group
#include<stdio.h>
void main(){
	int age;
	char gender;
	printf("enter your age:");
	scanf("%d",&age);
	printf("enter your gender('m' for male and 'f'for female):");
	fflush(stdin);
	scanf("%c",&gender);
	if(age<25)
	{
		if(gender=='m')
		{
			printf("group 1");
		}
		else if(gender=='f')
		{
			printf("group 2");
		}
	}
	else if(age>=25 && age<=45)
	{
		if(gender=='m')
		{
			printf("group 3");
		}
		else if(gender=='f')
		{
			printf("group 4");
		}
	}
	else if(age>45)
	{
		printf("group 5");
	}
}
