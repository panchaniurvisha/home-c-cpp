#include<iostream>
using namespace std;
/*class Cons
{
    public:
    Cons()//default constructer
    {
        cout<<"\n constructer calles....";
    }
};
int main()
{
    Class c1;
}*/
class Bank
{
    int acbalance,withdrawbalance,reminder_balance;
    public:
    Bank()
    {
        acbalance=1000;
        //cout<<"\n default constructer called ";
    }
    Bank (int initbal)
    {
        acbalance=initbal;
        //cout<<"\n parameterized constructer called ";
    }
    void showaccountbalance()
    {
        cout<<"\n account balance :"<<acbalance;
        wdbalance();
        cout<<"\n";
    }
    void wdbalance() 
    {
        cout<<"\n enter withdraw balance :";
        cin>>withdrawbalance;
        reminder_balance=acbalance- withdrawbalance;
        cout<<"\n reminder balance :"<<reminder_balance;

    }
};
int main()
{
    Bank person1(1500),person2(5000),person3;
    person1.showaccountbalance();
    person2.showaccountbalance();
    person3.showaccountbalance();
}


