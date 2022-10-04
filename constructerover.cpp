#include<iostream>
using namespace std;
//constructer overlode
/*class Sum{
    public:
    Sum(int,int);
    Sum(int,int,int);
    Sum(double,double);
    Sum(double,double,double);
};
Sum::Sum(int a,int b){
        cout<<"two para int a+b :"<<a+b<<endl;
}
Sum::Sum(int a,int b,int c){
        cout<<"three para int a+b+c :"<<a+b+c<<endl;
}
Sum::Sum(double a,double b){
        cout<<"two para double a+b :"<<a+b<<endl;
}
Sum::Sum(double a,double b,double c){
        cout<<"three para double a+b+c :"<<a+b+c<<endl;
} 
int main()
{
    Sum obj1(10,20),obj2(10,20,30),obj3(10.5,20.5),obj4(10.5,20.5,30.4);
    return 0;
}*/
//constructer overlode...........
/*class Bank{
    string name;
    int accbalance,wdbalance,dpbalance;
    public:
    Bank();
    Bank(int);
    void getdata();
    void showAccBalance();
    void showAccDetails();
    //Bank(int,int,int);
};
void Bank::getdata(){
    cout<<"\n person Name :";
    cin>>name;
}
Bank::Bank(){
    accbalance=1000;
}
Bank::Bank(int initbalance){
    accbalance=initbalance;
}
void Bank::showAccBalance(){
    cout<<"\n enter account balance: ";
    cin>>accbalance;
    cout<<"\n enter withdraw balance :";
    cin>>wdbalance;
    cout<<"\n reminder balance:"<<accbalance-wdbalance;
    cout<<"\n\n enter deposite balance :";
    cin>>dpbalance;
    cout<<"\n total balance :"<<(accbalance-wdbalance)+dpbalance;
}
void Bank::showAccDetails(){
    cout<<"\n enter account balance: "<<accbalance;
    cout<<"\n enter withdraw balance :"<<wdbalance;
    cout<<"\n reminder balance:"<<accbalance-wdbalance;
    cout<<"\n enter deposite balance :"<<dpbalance;
    cout<<"\n total balance :"<<(accbalance-wdbalance)+dpbalance;
}
int main()
{
    Bank person[5];
    int i;
    for(i=1;i<3;i++)
    {
        cout<<"\n enter person["<<i<<"]bank details .....";
        person[i].getdata();
        person[i].showAccBalance();
        person[i].showAccDetails();
    }
}*/
/*class Bank{
    string name;
    int  accbalance,wdbalance,dpbalance;
    public:
    void getdata(int,int,int);
    void showAccDetails();
    //Bank(int,int,int);
};
void Bank::getdata( int accbalance,int wdbalance,int dpbalance){
    cout<<"\n person Name :";
    cin>>name;
    cout<<"\n enter account balance: ";
    cin>>accbalance;
    cout<<"\n enter withdraw balance :";
    cin>>wdbalance;
    cout<<"\n reminder balance:"<<accbalance-wdbalance;
    cout<<"\n\n enter deposite balance :";
    cin>>dpbalance;
    cout<<"\n total balance :"<<(accbalance-wdbalance)+dpbalance;
}
void Bank::showAccDetails(){
    cout<<"\n enter name :"<<name;
    cout<<"\n enter account balance: "<<accbalance;
    cout<<"\n enter withdraw balance :"<<wdbalance;
    cout<<"\n reminder balance:"<<accbalance-wdbalance;
    cout<<"\n enter deposite balance :"<<dpbalance;
    cout<<"\n total balance :"<<(accbalance-wdbalance)+dpbalance;
}
int main()
{
    Bank person[5];
    person[1].getdata(10000,1000,5000);
    person[1].showAccDetails();
}
    /*int i;
    for(i=1;i<3;i++)
    {
        cout<<"\n enter person["<<i<<"]bank details .....";
        person[i].getdata(10000,1000,5000);
        person[i].showAccDetails();
    }
}*/
//function overloding
/*class Bank{
    string name;
    public:
    int getdata(int,int);
    double getdata(int,int,double);
};
int Bank::getdata( int accbalance,int wdbalance){
    cout<<"\n person Name :";
    cin>>name;
    cout<<"\n enter account balance: "<<accbalance;
    cout<<"\n enter withdraw balance :"<<wdbalance;
    return accbalance-wdbalance;
}
double Bank::getdata(int accbalance,int wdbalance,double dpbalance){
    cout<<"\n\n enter deposite balance :"<<dpbalance;
    return (accbalance-wdbalance)+dpbalance;
}
int main(){
    Bank person;
    person.getdata(10000,5000);
    cout<<"\n reminder balance ="<<person.getdata(10000,5000);
    cout<<"\n total balance ="<<person.getdata(10000,5000,9550.50);
    return 0;
}*/

//constructer overlode...............

/*#include <iostream>
using namespace std;
class bank
{
    int accountbalance, withdrawbalance,deposite_balance,reminder_balance,total_balance;
public:
    bank()
    {
        accountbalance = 1000;
        //cout << "\n default constructor called..";
    }
    bank(int initbal){
        accountbalance = initbal;
        //cout << "\n parameterlized constructor called...";
    }
    void showaccountbalance(){
        cout <<"\n account balance :=" << accountbalance;
        wdbalance();
    }
    void wdbalance(){
        cout <<"\n enter withdrawbalance :=";
        cin >>withdrawbalance;
        reminder_balance = accountbalance - withdrawbalance;
        cout <<"\n reminder balance :=" <<reminder_balance;
        cout<<"\n enter deposite balance :=";
        cin>>deposite_balance;
        total_balance=reminder_balance+deposite_balance;
        cout<<"\n total_balance :="<<total_balance;
    }
};
int main()
{
    bank person1(1500), person2(5000), person3;
    person1.showaccountbalance();
    person2.showaccountbalance();
    person3.showaccountbalance();
}*/
