#include<iostream>
#include<cstring>
using namespace std;
int deposit,withdraw,index;
int choice,password;
int press,m,c=0;
long ad;
int pin[10]={3452,7645,4589,9838,7456,4738,7846,2594,2310,6956};
string name[10]={"Aseem","Arpit","Ayush","Ashutosh","Arvind","Avinash","Chandrkant",
"Abhishek","Ajit","Akash"};
long bal[10]={10000,60646,26521,68317,82137,71236,72837,6213,723,54654};
class ATM
{
public:
void admin()
{
cout<<"Following are the various sets of PINs and the account holder's names (PINs are of 4 digits) : "<<endl;
for(int i=0;i<10;i++)
{
cout<<"Pin : "<<pin[i]<<" ";
cout<<"Name : "<<name[i]<<" ";
cout<<"Balance : "<<bal[i]<<endl;
}
}
void user()
{
while(1)
{
cout<<endl<<"Enter your Pin number:"<<endl;
cin>>password;
for(int i=0;i<10;i++)
{
if(password==pin[i])
{
c++;
cout<<"Welcome "<<name[i]<<" to my ATM"<<endl;
index=i;
break;
}
}
if(c==0)
{
cout<<"No Account number found with the pin entered"<<endl;
cout<<"You are not allowed to Use ATM";
exit(1);
}
else
{
cout<<"press 1 to continue and 0 to exit:";
cin>>press;
if(press==0)
{
cout<<"You press 0 to exit"<<endl;
cout<<"Thankyou for using my ATM"<<endl;
exit(0);
}
}
cout<<endl;
cout<<"0. Link your Aadhar number to account ";
cout<<endl;
cout<<"1. Balance enquiry";
cout<<endl;
cout<<"2. Cash Withdrawl";
cout<<endl;
cout<<"3. Deposit cash";
cout<<endl;
cout<<"4. Mini Statement";
cout<<endl;
cout<<"5. Quit";
cout<<endl;
cout<<"--------------------------------------------------------------------"<<endl;
cout<<"Enter your choice:";
cin>>choice;
switch(choice)
{
case 0:
cout<<"Enter you Aadhar number";
cin>>ad;
cout<<"Press 1 to Confirm:";
cin>>m;
if(m==1)
cout<<"Successfully Linked";
break;
case 1:
cout<<"Your Balance:"<<bal[index]<<endl;
break;
case 2:
cout<<"Enter the amount to withdraw and it should be multiple of 100:";
cin>>withdraw;
if(withdraw>bal[index])
cout<<"Insufficient Balance "<<endl;
else
{
bal[index]-=withdraw;
cout<<"Please collect the cash"<<endl;
cout<<"Your Current Balance is "<<bal[index]<<endl;
}
break;
case 3:
cout<<"Enter the amount to be deposited : ";
cin>>deposit;
bal[index]+=deposit;
cout<<"Your Account balance is"<<bal[index]<<endl;
break;
case 4:
cout<<"Collect the Statement"<<endl;
break;
case 5:
cout<<"Thank you for using ATM"<<endl;
exit(1);
break;
default:
cout<<"Invalid Input";
cout<<"Please try Again";
}
cout<<"Thanks for using our ATM"<<endl<<endl;
}
}
};
int main(){
int a,pa;
ATM a1;
cout<<"------------------------<Welcome to my ATM>-----------------------"<<endl;
cout<<"------------------------------------------------------------------"<<endl;
cout<<"Insert ATM Card"<<endl;
cout<<endl<<endl;
cout<<"Enter whether you are User or Admin. ";
cout<<"Enter 0 for admin and 1 for User : "<<endl;
cin>>a;
if(a==0)
{
cout<<"Confirm your password to prove that you are Admin : ";
cin>>pa;
if(pa==1234)
a1.admin();
else
cout<<endl<<"You aren't Admin. You don't have Authority to perform this Operation.";
}
else if(a==1)
a1.user();
else
cout<<"wrong choice";
}
