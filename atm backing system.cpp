#include<iostream>
using namespace std;
class bank
{
private:
    char name[40],actype[40];
    int bal,acno;
public:

    bank()
    {
        cout<<"enter acount name:";
        cin.getline(name,40);
        cout<<"enter acount name:";
        cin.getline(actype,40);
        cout<<"acount number:";
        cin>>acno;
        cout<<"opening balance:";
        cin>>bal;
    }
    void deposit(int amt)
    {
        bal=bal+amt;
        cout<<"balance after deposit:"<<bal<<endl;
        system("pause");
    }
    void withdraw(int amt)
    {
        if(amt>bal)
        {
            cout<<"sorry acount balance low:"<<endl;
        }
        else
        {
            bal=bal-amt;
            cout<<"withdraw after acount balance:"<<bal<<endl;
        }
        system("pause");
    }
    void display()
    {
        cout<<"-----acount name:"<<name;
        cout<<"-----acount type:"<<actype;

        cout<<"-----acount number:"<<acno;
        cout<<"-----acount balance:"<<bal;
    }
};
main()
{
    bank jamunabank;
    do
    {
        system("cls");

        int amount,choice;
        cout<<"---MAIN MANU---"<<endl;
        cout<<"1:-deposit money"<<endl;
        cout<<"2:- withdraw money"<<endl;
        cout<<"3:-display money"<<endl;
        cout<<"4:-Quit"<<endl;
        cout<<"Enter any choice"<<endl;

        cin>>choice;
        switch(choice)
        {



        case 1:
            cout<<"enter deposit money:";
            cin>>amount;
            jamunabank.deposit(amount);
            break;

    case 2:
        cout<<"enter withdraw money:";
        cin>>amount;
        jamunabank.withdraw(amount);
        break;

case 3:
    cout<<"display jamunabank acount detials:";
    jamunabank.display();
    break;

case 4:
cout<<"qout acount detials";






        }
    }
while(1);

}
