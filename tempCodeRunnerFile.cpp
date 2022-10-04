#include<iostream>
using namespace std;
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
class Bank{
    string name;
    int accbalance;
    int wdbalance,dpbalance;
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
}

/*class Bank{
    string name;
    int accbalance;
    int wdbalance,dpbalance;
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
    cout<<"\n enter deposite balance :";
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
    for(i=0;i<=2;i++)
    {
        cout<<"\n enter person["<<i<<"]bank details .....";
        person[i].getdata();
        person[i].showAccBalance();
        person[i].showAccDetails();
    }
}*/
