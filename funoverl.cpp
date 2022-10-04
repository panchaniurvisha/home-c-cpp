#include<iostream>
using namespace std;
/*class Area
{
    public:
    void calcArea(int);
    void calcArea(int,int);
    double calcArea(double);
};
void Area::calcArea(int side)
{
    cout<<"\n Area:"<<side*side;
}
void Area:: calcArea(int l,int b)
{
    cout<<"\n Area:"<<l*b;
}
double Area:: calcArea(double side)
{
    return side*side;
}
int main()
{
    Area square,rect;
    square.calcArea(8);
    rect.calcArea(7,8);
    cout<<"\n square area in double :"<<square.calcArea(7.5);
    return 0;
}*/
class Bank{
    public:
    void calcAc(int,int,int);
    //Bank(int,int,int);
};
void Bank::calcAc(int accbalance,int wdbalance,int dpbalance){
    cout<<"\n enter account balance: "<<accbalance;
    cout<<"\n enter withdraw balance :"<<wdbalance;
    cout<<"\n reminder balance:"<<accbalance-wdbalance;
    cout<<"\n enter deposite balance :"<<dpbalance;
    cout<<"\n total balance :"<<(accbalance-wdbalance)+dpbalance;
}
int main()
{
    Bank person1;
    cout<<"enter  person 1 bank statement :"<<endl;
    person1.calcAc(5000,1000,7000);
    return 0;
}
