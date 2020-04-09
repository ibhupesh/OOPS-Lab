#include<iostream>
using namespace std;
class factorial {
public : int a;
public : void  getdata();

};

void factorial:: getdata() {
cout<<"Enter the number";
cin>>a;
int i,p;
p=1;
for(i=1;i<=a;i++)
p=p*i;
cout<<"Factorial is: "<<p<<endl;
}
int main() {
factorial obj;

obj.getdata();

return 0;
}
