#include<iostream>
using namespace std;
class Bank{
    
    string name;
    int accbalance,wdbalance,dpbalance;
    public:
    static int totaltracount;
    static int totaldptracount;
    static int totalwdtracount;
void getdata(){
    cout<<"\n person Name :";
    cin>>name;
}
Bank(){
    accbalance=1000;
}
Bank(int initbalance){
    accbalance=initbalance;
}
void showAccBalance(){
    cout<<"\n enter account balance: ";
    cin>>accbalance;
    cout<<"\n enter withdraw balance :";
    cin>>wdbalance;
    cout<<"\n reminder balance:"<<accbalance-wdbalance;
    cout<<"\n\n enter deposite balance :";
    cin>>dpbalance;
    cout<<"\n total balance :"<<(accbalance-wdbalance)+dpbalance;
}
void setcount(int x,int y,int z){
    totaltracount=x;
    totaldptracount=y;
    totalwdtracount=z;
 }
void Counter(){
    totaltracount++;
    totaldptracount++;
    totalwdtracount++;
}
/*void GetCount(){
    cout<<"\n "<<totaltracount;
    cout<<"\n"<<totaldptracount;
    cout<<"\n "<< totalwdtracount;
}*/
void showAccDetails(){
    cout<<"\n enter account balance: "<<accbalance;
    cout<<"\n enter withdraw balance :"<<wdbalance;
    cout<<"\n reminder balance:"<<accbalance-wdbalance;
    cout<<"\n enter deposite balance :"<<dpbalance;
    cout<<"\n total balance :"<<(accbalance-wdbalance)+dpbalance;
}
};
int Bank::totaltracount=0;
int Bank::totaldptracount=0;
int Bank::totalwdtracount=0;
int main()
{
    Bank p[5];
    int i;
    for(i=1;i<=3;i++)
    {
        p[i].getdata();
        p[i].showAccBalance();
        p[i].showAccDetails();
    }
    Bank person1,person2,person3;
    person1.setcount(5,2,2);
    person3.Counter();
    //person1.GetCount();
        cout<<"\n total Transaction Count :"<<Bank::totaltracount;
        cout<<"\n total Deposite Transaction Count :"<<Bank::totaldptracount;
        cout<<"\n total Withdraw Transaction Count :"<<Bank::totalwdtracount;
}
