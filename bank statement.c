#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Bankdet
{
	char Name[25];
	char AccNo[17];
	float Balance;
};
struct Bankdet a;
void creatAcc();
void Deposit(float D_amount);
void Cash_Withdraw(float W_amount);
float Balance_Enquiry();
int main(){
	int f=1,c;
	float amt,Balance=1000;
	while(f==1){
		printf("1-Create Account\n2-Deposit\n3-Cash Withdrawal\n4-Balance Enquiry\nAny number to exit\n");
		scanf("%d",&c);
		switch(c){
			case 1:
			creatAcc();
			break;
			case 2:{
				printf("Enter the amt to be deposited: ");
				scanf("%d",&amt);
				Deposit(amt);
			break;}
			case 3:{
				printf("Enter the amt to be withdrawn: ");
				scanf("%f",&amt);
				Cash_Withdraw(amt);
				break;
			}
			
			case 4:{
				printf("Your balance is:%f",Balance_Enquiry());
				break;
			}
			default:{
				f=0;
				break;
			}
			
		}
	}
}
void creatAcc(){
	char d;
	scanf("%c",&d);
	printf("Enter Name: ");
	gets(a.Name);
	printf("Enter acc No: ");
	scanf("%s",a.AccNo);
}
void Deposit(float D_amount){
	a.Balance=a.Balance+D_amount;
	printf("\nAmount successfully deposited");
}
void Cash_Withdraw(float W_amount){
	if(W_amount<=a.Balance){
		a.Balance-=W_amount;
		printf("\nAmount successfully withdrawn");
	}
}
float Balance_Enquiry()
{
	return a.Balance;
}
