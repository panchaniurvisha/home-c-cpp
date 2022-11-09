#include<iostream>
using namespace std;
class Example
{
    int a,b;
    public:
    Example(){}
    Example(int x,int y)
    {
        a=x;
        b=y;
    }
    Example add(Example E1,Example E2)
    {
        Example temp;
        temp.a=E1.a+E2.a;
        temp.b=E1.b+E2.b;
        return temp;
    }
    void Showval()
    {
        cout<<"value of object a:"<<a<<"\tb:"<<b<<"\n";
    }
};
int main()
{
    Example E1(10,20),E2(20,30),E3;
    cout<<"\n E1";
    E1.Showval();
    cout<<"\n E2";
    E2.Showval();
    cout<<"\n E3";
    E3=E3.add(E1,E2);
    E3.Showval();
    return 0;
}