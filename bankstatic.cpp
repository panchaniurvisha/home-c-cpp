#include<iostream>
using namespace std;
class Bank{ 
    string name;
    int accbalance;
    public:
    static int totaltracount,totaldpcount,totalwdcount,totaltraAmoucount,totaldpAmocount,totalwdAmocount;
void getdata(){
    cout<<"\n person Name :";
    cin>>name;
}
void WdBalance(int amt){
    cout<<"\n enter account balance: ";
    cin>>accbalance;
    cout<<"\n enter withdraw balance :";
    cin>>amt;
    totalwdAmocount+=amt;
}
void DpBalance(int amt){
    cout<<"\n\n enter deposite balance :";
    cin>>amt;
    totaldpAmocount+=amt;
}
void setcount(int x,int y,int z){
    totaltracount=x;
    totaldpcount=y;
    totalwdcount=z;
 }
void Counter(){
    totaltracount++;
    totaldpcount++;
    totalwdcount++;
    totaltraAmoucount=totaldpAmocount+totalwdAmocount;
}
};
int Bank::totaltracount=0;
int Bank::totaldpcount=0;
int Bank::totalwdcount=0;
int Bank::totaltraAmoucount=0;
int Bank::totaldpAmocount=0;
int Bank::totalwdAmocount=0;
int main()
{
    Bank p[5];
    int i;
    for(i=1;i<=3;i++)
    {
        p[i].getdata();
        p[i].WdBalance(5000);
        p[i].DpBalance(10000);
        p[i].setcount(5,2,2);
        p[i].Counter();
    }
    cout<<"\n total Transaction Count :"<<Bank::totaltracount;
    cout<<"\n total Deposite Transaction Count :"<<Bank::totaldpcount;
    cout<<"\n total Withdraw Transaction Count :"<<Bank::totalwdcount;
    cout<<"\n Total transation Amount :"<<Bank::totaltraAmoucount;
    cout<<"\n Total transation Deposite Amount :"<<Bank::totaldpAmocount;
    cout<<"\n Total transation Withdraw Amount :"<<Bank::totalwdAmocount;
}