#include<iostream>
using namespace std;
class complex {
float realp;
float imagp;
public : void getdata();
public : void sum(complex c1, complex c2);
public : void output();
};

void complex:: getdata() {
cout<<"Enter the real part \n";
cin>>realp;
cout<<"Enter the img part \n";
cin>>imagp;
}

void complex:: sum(complex c1, complex c2)
{
realp= c1.realp+ c2.realp;
imagp= c1.imagp + c2.imagp;
}

void complex:: output() {
cout<<realp<<" + i"<<imagp<<"\n";
}

int main() {
complex x,y,z;
cout<<"Enter first complex number \n";
x.getdata();
cout<<"Enter second complex number \n";
y.getdata();
z.sum(x,y);

cout<<"First number \n";
x.output();
cout<<"Second nuber \n";
y.output();

cout<<"Sum of the two numbers = ";
z.output();

return 0;

}
