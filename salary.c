//salary increase
#include<stdio.h>
void main(){
	float cur_sal,new_sal;
	int wrk_exp;
	char role,lang,mastrs,phd;
	printf("enter your role('a' for administrative staf,'t' for technical staff and 'o' for others):");
	fflush(stdin);
	scanf("%c",&role);
	printf("enter your current salary in Rs:");
	scanf("%f",&cur_sal);
	new_sal=cur_sal+(cur_sal*0.25);
	switch(role)
	{
		case 'a':
			
			printf("enter your work exreience:");
			scanf("%d",&wrk_exp);
			if (wrk_exp>5)
			{
				new_sal=cur_sal+(cur_sal*0.3);
			}
			break;
		case 't':
			
			printf("do u have masters(y/n):");
			fflush(stdin);
			scanf("%c",&mastrs);
			printf("do u have phd(y/n):");
			fflush(stdin);
			scanf("%c",&phd);
			if(phd=='y')
			{
				new_sal=cur_sal+(cur_sal*0.35);
			}
			else if (mastrs=='y')
			{
				new_sal=cur_sal+(cur_sal*0.28);
			}
			break;
	}
	printf("do you speak a foreign language?(y/n):");
	fflush(stdin);
	scanf("%c",&lang);
	if (lang=='y')
	{
		new_sal+=cur_sal*0.02;
	}
	printf("your new salary is:%fRs",new_sal);
}
