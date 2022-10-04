#include<iostream>
using namespace std;
class Student
{
    int admno;
    char name[20];
    float eng,maths,science,total;
    public:
    void Takedata()
    {
        cout<<"\n enter admno :";
        cin>>admno;
        cout<<"\n name :";
        cin>>name;
        cout<<"\n english :";
        cin>>eng;
        cout<<"\n maths :";
        cin>>maths;
        cout<<"\n science :";
        cin>>science;
        total=maths+eng+science;
    }
    float ctotal()
    {
        return total;
    }
    void showdata()
    {
        cout<<"\n enter admno :"<<admno;
        cout<<"\n name :"<<name;
        cout<<"\n english :"<<eng;
        cout<<"\n maths :"<<maths;
        cout<<"\n science :"<<science;
        cout<<"\n total ="<<total;
    }
};
int main()
{
    Student s1;
    s1.Takedata();
    cout<<"\n total :"<<s1.ctotal();
    s1.showdata();
}