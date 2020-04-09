#include<iostream>
using namespace std;
int main() {
cout<<"Enter any two numbers"<<endl;
int a,b,n;
cin>>a>>b;
cout<<"Enter 1 To find sum."<<endl;
cout<<"Enter 2 To find difference."<<endl;
cout<<"Enter 3 To find product."<<endl;
cin>>n;
switch(n) {
  case 1:
  cout<<"Sum ="<<a+b<<endl;
  break;
  case 2:
  cout<<"Difference ="<<a-b<<endl;
  break;
  case 3:
  cout<<"Product ="<<a*b<<endl;
  break;
  default:
  cout<<"WRONG CHOICE!!"<<endl;
}
return 0;
}
