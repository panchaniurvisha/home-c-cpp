//static
#include<iostream>
using namespace std;
class Statcount
{
    public:
    static int stcount;
    void setcount(int n){
        stcount=n;
    }
    void counter(){
        stcount++;
    }
    void getcount(){
        cout<<"\n "<<stcount;
    }
};
int Statcount::stcount=0;
int main()
{
    Statcount obj1,obj2,obj3;
    obj1.setcount(10);
    obj3.counter();
    obj1.getcount();
    cout<<"\n static :"<<Statcount::stcount;
}