#include<iostream>
using namespace std;
/*class bill
{
    int rate,qty,amt,dis,bill_amt,gst,netbill;
    public:
    void setdata()
    {
        cout<<"\n enter quantity :";
        cin>>qty;
        cout<<"\n enter rate :";
        cin>>rate;
    }
    void calc()
    {
        amt=qty*rate;
        dis=(amt*5)/100;
        bill_amt=amt-dis;
        gst=(bill_amt*18)/100;
        netbill=bill_amt+gst;
    }
    void getdata()
    {
        calc();
        cout<<"\n amount :"<<amt;
        cout<<"\n discount :"<<dis;
        cout<<"\n bill_amount :"<<bill_amt;
        cout<<"\n gst :"<<gst;
        cout<<"\n netbill :"<<netbill;
    }
};
int main()
{
    bill b[5];
    int i;
    for(i=0;i<2;i++)
    {
        cout<<"enter product details :"<<i+1<<endl;
        b[i].setdata();
        cout<<endl;
    }
    for(i=0;i<2;i++)
    {
        cout<<"details of product :"<<i+1<<endl;
        b[i].getdata();
        cout<<endl;
    }
}*/
/*class student
{
    char name[100];
    int m,s,e;
    float total,per;
    public:
    void setdata()
    {
        cout<<"\n name :";
        cin>>name;
        cout<<"\n enter maths marks :";
        cin>>m;
        cout<<"\n enter science marks :";
        cin>>s;
        cout<<"\n enter english marks :";
        cin>>e;
    }
    void calc()
    {
        total=(float)(m+s+e);
        per=total/3;
        if(per=>75)
        {
            cout<<"\n grade :'A'";
        }
        else if(per<75 && 65>=per)
        {
            cout<<"\n grade :'B'";
        }
        else if(per<65 && 55>=per)
        {
            cout<<"\n grade :'C'";
        }
        else if(per<55 && 45>=per)
        {
            cout<<"\n grade :'D'";
        }
        else
        {
            cout<<"\n fail";
        }

    }
    void getdata()
    {
        calc();
        cout<<"\n name :"<<name;
        cout<<"\n maths :"<<m<<"\n science :"<<s<<"\n english :"<<e;
        cout<<"\n total :"<<total;
        cout<<"\n per :"<<per;
    }
};
int main()
{
    student s[5];
    int i;
    for(i=0;i<2;i++)
    {
        cout<<"enter student details :"<<i+1<<endl;
        s[i].setdata();
        cout<<endl;
    } 
    for(i=0;i<2;i++)
    {
        cout<<" enter result of student :"<<i+1<<endl;
        s[i].getdata();
        cout<<endl;
    }
}*/




