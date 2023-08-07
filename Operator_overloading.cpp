#include<iostream>
using namespace std;
class account{


public :
    string name,accnumber;
    int balance,amount;

    void st(string n,string a,int x){
    name = n;
    accnumber = a;
    balance = x;

    }
    account operator +(int y){
        account a;
        a.balance = balance + y;
        a.name = name;
        a.accnumber = accnumber;
        return a;}

    void show(){
        cout<<"NAME:"<<name<<endl;
        cout<<"Account NO.: "<<accnumber<<endl;
        cout<<"BALANCE: "<<balance<<endl;  }
};
int main ()
{
    int amount;
    account acc;
    string a,b;
    int c;
    cout<<" Name           ";cin>>a;
    cout<<"Account number  ";cin>>b;
    cout<<"Balance         ";cin>>c;
    acc.st(a,b,c);

    cout<<endl<<" initial values "<<endl<<endl;
    acc.show();

    cout<<endl<<endl<<"Amount to Deposit = " ; cin>>amount;
    acc=acc+amount;
    acc.show();

    return 0;
}
