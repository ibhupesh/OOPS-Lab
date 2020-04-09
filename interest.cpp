#include <iostream>
using namespace std;
class interest {
double r=5.0; double t=10.0;
double i,a,ta;
public : void getdata()
{
cout<<"Enter the amount \n";
cin>>a;
cout<<"\n";}
public : double cal();
public : void  display();};
double interest:: cal(){
i=a*r*t/100;
ta=a+i;
return(ta);
}
void interest :: display() {
double d=cal();
cout<<"The interest = \n"<<i<<" \n";
cout<<"The amount after adding interest for 10 years = \n"<<d;
cout<<"\n";
}
int main() {
interest obj;
obj.getdata();
obj.cal();
obj.display();
return 0;
}
