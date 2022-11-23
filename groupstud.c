//group based on studies
#include<stdio.h>
void main()
{
	char grad,lang;
	int xp;
	printf("your graduation status('u' for university graduate and 'h' for high school graduate):");
	fflush(stdin);
	scanf("%c",&grad);
	switch (grad)
	{
		case 'u':
			printf("do you speek german(y/n):");
			fflush(stdin);
			scanf("%c",&lang);
			if(lang=='y')
			{
				printf("group1");
			}
			else
			{
				printf("group2");
			}
			break;
		case 'h':
			printf("enter your experience:");
			scanf("%d",&xp);
			if (xp>10)
			{
				printf("group3");
			}
			else if(xp>=5 && xp<=10)
			{
				printf("group4");
			}
			else if(xp<5)
			{
				printf("group5");
			}
			break;
	}
}
