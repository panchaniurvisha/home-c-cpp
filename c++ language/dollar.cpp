#include<iostream>
#include<cstring>
using namespace std;
int main()
/*{
    int dollar=35,rupee;
    std::cout<<"\n dollar"<<dollar<<"\n rupee :"<<dollar*70;
}*/
//for loop program
/*{
    int i;
    for(i=10;i>=1;i--)
    {
        cout<<"\n"<<i;
    }
    return 0;
}*/
/*{
    int i;
    for(i=51;i<=99;i++)
    {
        cout<<"\n"<<i;
    }
    return 0;
}*/
/*{
    int i,n;
    cout<<"\n n :";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"\n"<<i;
    }
    return 0;
}*/
/*{
    int i,n;
    cout<<"\n n :";
    cin>>n;
    for(i=n;i>=1;i--)
    {
        cout<<"\n"<<i;
    }
    return 0;
}*/
/*{
    int n,i;
    cout<<"\n n :";
    cin>>n;
    for(i=-n;i<=n;i++)
    {
        cout<<"\n"<<i;
    }
    return 0;
}*/
/*{
    int i;
    cout<<"\n odd no 1 to 50;";
    for(i=1;i<=50;i+=2)
    {
        cout<<"\n"<<i;
    }
    return 0;
}*/
/*{
    int i;
    cout<<"\n even no 1 to 50";
    for(i=1;i<=50;i++)
    {
        if(i%2==0)
        cout<<"\t "<<i;
    }
    return 0;
}*/
/*{
    char a;
    for(a='A';a<='Z';a++)
    {
        cout<<"\n"<<a;
    }
}*/
/*{
    char a;
    for(a='A';a<='Z';a++)
    {
         cout<<a<<"\t"<<(int)a<<endl;
    }
    return 0;
}*/
/*{
   int i;
   for(i=1;i<=26;i++)
    {
        cout<<(char)(i+64)<<"-"<<(char)(i+64+32)<<endl;
    }
    return 0;
}*/
// OR
/*{
char a,j;
    for(a='A';a<='Z';a++)
    {
        if(j=a+32)
        cout<<a<<"-"<<j<<endl;
    }
        return 0;
}*/
/*{
    int i,num;
    cout<<"\n enter num :";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        cout<<"\n"<<i*i;
    }
    return 0;
}*/
/*{
    int i,n;
    cout<<"\n enter n :";
    cin>>n;
    for(i=1;i<=n;i++)
    {
      if(i%2==0)
      {
        cout<<"\n"<<i*i;
      }
      else
      {
        cout<<"\n"<<i;
      }  
    }
    return 0;
}*/
/*{
    int i,n;
    cout<<"\n n :";
    cin>>n;
    for(i=1;i<=n;i*=2)
    {
        cout<<"\n"<<i;
    }
    return 0;
}*/
/*{
    int i,n,x=1;
    cout<<"\n n :";
    cin>>n;
    for(i=1;i<=n;i*=2)
    {
        cout<<"\n"<<i*x++;
    }
    return 0;
}*/
/*{
    char i;
    for(i='A';i<='Z';i+=2)
    {
        cout<<"\n"<<i;
    }
    return 0;
}*/
/*{
    int a=1,b=0,c,n,i;
    cout<<"\n n :";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        cout<<"\n"<<c;
        a=b;
        b=c;
    }
    return 0;
}*/
/*{
    float i,n,x=0.5;
    for(i=0.5;i<=10;i++)
    {
        cout<<"\n"<<x;
          x=(i+x);
    }
    return 0;
}*/
/*{
    int i;
    for(i=0;i<24;i++)
    {
        if(i%4==0)
        {
            cout<<"\t"<<(char)(i+65);
        }
        else
        {
            cout<<"\t"<<(char)(i+65+32);
        }
        i++;
    }
    return 0;
}*/
/*{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cout<<" "<<i;
        }
            cout<<"\n";
    }
    return 0;
}*/
/*{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=5;j++)
        {
            cout<<" "<<i;
        }
            cout<<"\n";
    }
}*/
/*{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" * ";
        }
            cout<<"\n";
    }
    return 0;
}*/
/*{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cout<<" "<<j;
        }
            cout<<"\n";
    }
    return 0;
}*/
/*{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cout<<" "<<(char)(i+64);  
        }
            cout<<"\n";
    }
    return 0;
}*/
/*{
    int i,j;
    for(i=2;i<=10;i+=2)
    {
        for(j=2;j<=10;j+=2)
        {
            cout<<"  "<<i;
        }
            cout<<"\n";
    }
        return 0;
}*/
/*{
    int i,j;
    for(i=1;i<=10;i+=2)
    {
        for(j=1;j<=10;j+=2)
        {
            cout<<" "<<i;
        }
            cout<<"\n";
    }
    return 0;
}*/
/*{
    int i,j,x=1;
    for(i=1;i<=5;i++)
     {
        for(j=1;j<=5;j++)
        {
            cout<<"\t "<<x++;
        }
            cout<<"\n";
    }
    return 0;
}*/
/*{
    int i,j,x=65;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cout<<"\t "<<(char)(x++);
        }
            cout<<"\n";
    }
}*/
/*{
    int i,j;
     for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cout<<""<<"\t"<<i<<j;
        }
            cout<<"\n";
    }
    return 0;
}*/
/*{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"\t"<<j;
        }
            cout<<"\n";
    }
    return 0;
}*/
/*{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"\t"<<i;
        }
            cout<<"\n";
    }
    return 0;
}*/
/*{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)
        {
            cout<<"\t"<<i;
        }
            cout<<"\n";
    }
    return 0;
}*/
/*{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)
        {
            cout<<"\t"<<j;
        }
            cout<<"\n";
    }
    return 0;
}*/
/*{
    int i,j,x=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"\t"<<x++;
        }
            cout<<"\n";
    }
    return 0;
}*/
/*{
    int i,j,x=65;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"\t"<<(char)(x++);
        }
            cout<<"\n";
    }
    return 0;
}*/
/*{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"\t"<<(char)(j+64);
        }
            cout<<"\n";
    }
}*/
/*{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"\t"<<j-i+5;
        }
            cout<<"\n";
    }
    return 0;
}*/
/*{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"\t"<<(char)(i-j+65);
        }
            cout<<"\n";
    }
    return 0;
}*/
/*{
    int i,j,a=65;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2==0)
                cout<<"\t"<<(char)(a+32);
            else
                cout<<"\t"<<(char)(a);
                a++;
        }
                cout<<"\n";
    }
    return 0;
}*/
/*{
    int i,j,a=97;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
              cout<<"\t"<<(char)(a-32);
            else
                cout<<"\t"<<(char)(a);
                a++;
        }
                cout<<"\n";
    }
    return 0;
}*/
/*{
    int i,j,a=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"\t"<<a++%2;
        }
        cout<<"\n";
    }
    return 0;
}*/
/*{
    int i,j,sp=15;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=sp;j++)
          {
            cout<<" ";
          }
            for(j=1;j<=i;j++)
            {
                cout<<" *";
            }
            sp--;
            cout<<"\n";
    }
    sp++;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=sp;j++)
          {
               cout<<" ";
          }
            for(j=1;j<=i;j++)
            {
                cout<<" *";
            }
            sp++;
            cout<<"\n";
    }
    return 0;
}*/
/*{
    int i,j,sp=10;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=sp;j++)
          {
            cout<<" ";
          }
            for(j=1;j<=i;j++)
            {
                cout<<" *";
            }
            sp--;
            cout<<"\n";
    }
    sp=7;
    for(i=4;i>=1;i--)
    {
        for(j=1;j<=sp;j++)
          {
               cout<<" ";
          }
            for(j=1;j<=i;j++)
            {
                cout<<" *";
            }
            sp++;
            cout<<"\n";
    }
    return 0;
}*/
//three diamension
/*{
    int i,j,k,a[5][5][5];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                cout<<"\n a["<<i<<"]["<<j<<"]["<<k<<"]";
                cin>>a[i][j][k];
            }
        }
    }
    cout<<"\n your matrix is --------------\n\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                cout<<"\t"<<a[i][j][k];
            }
            cout<<"\n";
        }
    }
    return 0;
}*/
//{///////////////////////////////////////string--------------------------------------------
/*int main()
{
    int i;
    char str[10];
    cout<<"\n enter string :";
    gets(str);
    for(i=0;str[i]!='\0';i++);
    {
        cout<<"\n string length "<<i;
    }
    return 0;
}*/
/*int main()
{
    int i,j,len;
    char str1[100],str2[100];
    cout<<"\n enter string :";
    gets(str1);
    for(i=0;str1[i]!='\0';i++);
    {
        cout<<"\n string length is ="<<i;
    }
    int k=i;
    for(j=0;j<=i;j++)
    {
            str2[j]=str1[--k];
    }
    str2[j]!='\0';
    cout<<"\n reverse string :"<<str2;
    return 0;
}*/
/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str;
    cout<<"\n please enter your name :";
    //cin>>str;
    //cout<<"\n str :"<<str;
    getline(cin,str);
    cout<<"\n "<<str<<"";
    //cout<<"hello"<<str<<"wellcome to skill \n";
    return 0;
}*/
/*void mystring(string newstr)
{
    cout<<"hello"<<newstr<<"wellcome to skill !\n";
}
int main()
{
    string str;
    cout<<"please enter your name :\n";
    getline(cin,str);
    mystring(str);
    return 0;
}*/
/*void mystring(string newstr)
{
    cout<<"\n"<<newstr;
}
int main()
{
    char str[100];
    cout<<"\n enter string :";
    cin>>str;
    int len=strlen(str);
    cout<<"\n string length :"<<strlen(str);
    mystring(str);
    return 0;
}*/
/*int main()
{
    char str[100];
    cout<<"\n enter string :";
    cin>>str;
    int len=strlen(str);
    cout<<"\n string length :"<<len;
    return 0;
}*/
//----------------all string length-----len=str.length();
/*{
    string str;
    cout<<"\n enter string :";
    getline(cin,str);
    int len=str.length();
    cout<<"\n enter string length :"<<len;
}*/
/*int main()
{
    int i,len,fl=0;
    char str1[100];
    cout<<"\n enter string =";
    cin>>str1;
    for(i=0;str1[i]!='\0';i++);
    {
        cout<<"\n string length :"<<i;
    }
    len=i;
    for(i=0;i<=len;i++)
    {
        cout<<"\n"<<str1[i-1]<<"_"<<str1[len-i];
        if(str1[i-1]==str1[len-i])
        {
            fl=1;
        }
        else
        {
            fl=0;
        }
    }
    if(fl==1)
    {
        cout<<"\n string is palindrome";
    }
    else
    {
        cout<<"\n string is not palindrome";
    }
    return 0;
}*/
//int main()
{
    int i,j,len,fl=0;
    char str1[100],str2[100];
    cout<<"\n enter string :";
    cin>>str1;
    for(i=0;str1[i]!='\0';i++);
    {
        cout<<"\n string len :"<<i;
    }
    int k=i;
    for(j=0;j<=i;j++)
    {
        str2[j]=str1[--k];
    }
    str2[j]!='\0';
    cout<<"\n string reverse :"<<str2;
    len=i;
    for(i=0;i<=len;i++)
    {
        cout<<"\n"<<str1[i-1]<<"_"<<str1[len-i];
        if(str1[i]==str2[i])
        {
            fl=1;
        }
        else
        {
            fl=0;
            break;
        }
    }
    if(fl==1)
    {
        cout<<"\n string is palindrome";
    }
    else
    {
        cout<<"\n string is not palindrome";
    }
    return 0;
}





        






    
    
  

        
    










