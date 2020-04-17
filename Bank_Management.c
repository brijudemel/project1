#include<stdio.h>
#include<string.h>
#include<stdbool.h>
char name[20]="";
char address[50]="";
char acc_no[12]="";
char ph_no[11]="";
int balance=0;
void update();
void withdraw();
void deposit();
void display();
int main()
{
	char pass[15],password[15]="Myp@$$word";
	int k=0,i=0;
	while(i<5)
	{
		printf("Enter the password: \n");
		gets(pass);
		if (strcmp(pass,password)==0)
		{
			k=1;
			break;
		}
		else
		{
			printf("Password is wrong. \n");
			i++;
			if(i<5)
			{
				printf("Try again. \n");
			}
		}
	}
	if(k==0)
	{
		printf("No more attempts are left. \n");
	}
	else
	{
		int ch=0;
		while (ch!=5)
		{
			printf("CHOOSE:\n");
			printf("1-	To add or update Account details.\n");
			printf("2-	To withdraw from account.\n");
			printf("3-	To Deposit in the account.\n");
			printf("4-	To Display Details of existing customer.\n");
			printf("5-	To Exit.\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					update();
					break;
				case 2:
					withdraw();
					break;
				case 3:
					deposit();
					break;
				case 4:
					display();
			}
			
		}
	}
	return 0;
}
void update()
{
	int ch;
	if(name[0]=='\0')
	{
		printf("Enter Name of Account Holder: \n");
		scanf("%s",name);
	}
	else
	{
		printf("If name has to be updated press 1 else press 0: \n");
		scanf("%d",&ch);
		if(ch==1)
		{
			printf("Enter Name of Account Holder: \n");
			scanf("%s",name);
		}
	}
	if(address[0]=='\0')
	{
		printf("Enter Address of Account Holder: \n");
		scanf("%s",address);
	}
	else
	{
		printf("If Address has to be updated press 1 else press 0: \n");
		scanf("%d",&ch);
		if(ch==1)
		{
			printf("Enter Address of Account Holder: \n");
			scanf("%s",address);;
		}
	}
	if(acc_no[0]=='\0')
	{
		printf("Enter the Account Number: \n");
		scanf("%s",acc_no);
	}
	else
	{
		printf("If Account Number has to be updated press 1 else press 0: \n");
		scanf("%d",&ch);
		if(ch==1)
		{
			printf("Enter Account Number: \n");
			scanf("%s",acc_no);
		}
	}
	if(ph_no[0]=='\0')
	{
		printf("Enter Phone Number of Account Holder: \n");
		scanf("%s",ph_no);
	}
	else
	{
		printf("If Phone Number has to be updated press 1 else press 0: \n");
		scanf("%d",&ch);
		if(ch==1)
		{
			printf("Enter Phone Number of Account Holder: \n");
			scanf("%s",ph_no);
		}
	}
}
void withdraw()
{
	int amt;
	printf("AVAILABLE BALANCE: %d\n",balance);
	printf("Enter the amount to be withdrawn: \n");
	scanf("%d",&amt);
	if(amt>balance)
	{
		printf("Your balance is lesser than the amount you entered.\n");
	}
	else
	{
		printf("WITHDRAWN.\n");
		balance=balance-amt;
		printf("Balance: %d\n",balance);
	}
}
void deposit()
{
	int amt;
	printf("AVAILABLE BALANCE: %d\n",balance);
	printf("Enter the amount to be Deposited: \n");
	scanf("%d",&amt);
	balance=balance+amt;
	printf("Balance: %d\n",balance);
}
void display()
{
	printf("Name: %s\n",name);
	printf("Phone Number: %ld\n",ph_no);
	printf("Address: %s\n",address);
	printf("Account Number: %ld\n",acc_no);
	printf("Balance: %d\n",balance);
}
