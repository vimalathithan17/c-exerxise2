//stay at hotel bill
#include<stdio.h>
void main(){
	char room,pay_method;
	int nights;
	float single=200.0;
	float doubble=250.0;
	float amt,bill;
	printf("enter the type of room you want to sty in('s' for single room and'd' for doubble room):");
	fflush(stdin);
	scanf("%c",&room);
	printf("enter the number of nights you want to stay:");
	scanf("%d",&nights);
	printf("do you want to pay the money as cash(y/n):");
	fflush(stdin);
	scanf("%c",pay_method);
	switch (room)
	{
		case 's':
			amt=nights*single;
			bill=amt;
			if (pay_method=='y')
			{
				bill-=amt*0.02;
			}
			if(nights>10)
			{
				bill-=amt*0.05;
			}
			break;
		case 'd':
			amt=nights*doubble;
			bill=amt;
			if (pay_method=='y')
			{
				bill-=amt*0.02;
			}
			if(nights>10)
			{
				bill-=amt*0.05;
			}
			break;
	}
	printf("the amount to be paid(including VAT):%fRs",bill+(bill*0.12));
}
