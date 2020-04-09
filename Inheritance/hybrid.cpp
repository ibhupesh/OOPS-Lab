#include<iostream>
using namespace std;
int a,b,c,d,e;
class A
{
protected:
public:
 void getab()
 {
 cout<<"\nEnter a and b value:"<<endl;
 cin>>a>>b;
 }
};

class B:public A    {
protected:
public:
void getc()
 {
 cout<<"Enter c value:"<<endl;
 cin>>c;
 }
};

class C
{
protected:
public:
 void getd()
 {
 cout<<"Enter d value:";
 cin>>d;
 }
};

class D:public B,public C
{
protected:
public:
 void result()
 {
 getab();    getc();
 getd();    e=a+b+c+d;
 cout<<"\n Addition is :"<<e<<endl;
 }
};

int main()
{
 D d1;
 d1.result();

 return 0;
}
