#include<iostream>
using namespace std;
class cal {
public :int s,l,b;
void getdata();
void area();
};
class sol: cal{
public: void  getdata();
public: void  area();
};

void cal::getdata() {
cout<<"Enter value of side of square"<<endl;
cin>>s;
cout<<"Length of rectangle"<<endl;
cin>>l;
cout<<"Breadth of rectangle"<<endl;
cin>>b;
}
void cal::area() {
int as= s*s;
int ar=l*b;
cout<<"Area of square=  "<<as<<endl;
cout<<"Area of rectangle= "<<ar<<endl;
}


int main() {
cal d1;
d1.getdata();
d1.area();
return 0;
}
