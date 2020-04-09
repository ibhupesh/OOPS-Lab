#include<iostream>
using namespace std;
int  main(){
int a,b,c;
cout<<"Enter the value of a and b"<<endl;
cin>>a>>b;
cout<<"a= "<<a<<"b= "<<b<<endl;

cout<<"Swapping using third variable"<<endl;
c=a;
a=b;
b=c;
cout<<"Swapped values of a and b are: "<<endl;
cout<<"a="<<a<<"  b= "<<b<<endl;
return 0;

}
