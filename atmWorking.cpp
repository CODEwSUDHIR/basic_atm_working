#include<iostream>
using namespace std;

void check(int bal)
{
    cout<<"\n------------------------";
	cout<<"\nCurrent Balance = "<<bal<<"\n";
	cout<<"------------------------\n";

}
int deposite(int bal)
{
    int amt;
    cout<<"Enter Your Amount:  ";
    cin>>amt;
    
    if(amt <= 20000)
    {
    bal = bal + amt;
    }
    else
    {
        cout<<"Deposite Limit is Upto 20000---Pls Try Again\n";
    }
    return bal;
}
int withdraw(int bal)
{
    int amt;
    if(bal==0)
    {
        cout<<"No Cash Available\n";
        return bal;
    }
    cout<<"Enter You Amt: ";
    cin>>amt;
    if(amt > bal)
    {
        cout<<"Insufficient Balance\n";
    }
    else
    {
        bal = bal - amt;
    }
    
    return bal;
}

int main()
{
	int ch;
	int balance = 0;
	while(ch != 4)
	{
		cout<<"\n====================================\n";
		cout<<"1.CHECK 2. DEPOSIT 3.WITHDRAW 4.EXIT";
		cout<<"\n====================================\n";

		cout<<"\n";
		cout<<"Enter Your Choice: ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				check(balance);
				break;
			case 2:
				balance = deposite(balance);
				break;
			case 3:
				balance = withdraw(balance);
				break;
			case 4: 
				cout<<"Thank You\n";
				break;
			default:
				cout<<"Invalid Choice\n";
				break;
		}
	}
}
