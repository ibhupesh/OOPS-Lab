#include<iostream>
using namespace std;
int main() {
int a,b;
cout<<"Enter the values of a and b"<<endl;
cin>>a>>b;
cout<<"a= "<<a<<" b= "<<b<<endl;

a=a+b;
b=a-b;
a=a-b;
cout<<"Swapped values"<<endl;
cout<<"a= "<<a<<" b= "<<b<<endl;
return 0;
}
