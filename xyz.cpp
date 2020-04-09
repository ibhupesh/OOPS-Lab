#include<iostream>
using namespace std;
class xyz {
int a,b;
public:xyz(int a1,int b1){
a=a1;
b=b1;
}
int mul() {return(a*b);} 
};

int  main() {
int i,j;
cout<<"First number"<<endl;
cin>>i;
cout<<"Second number"<<endl;
cin>>j;

xyz c1(i,j);
cout<<"Product of two numbers = "<<c1.mul()<<endl;
return 0;
}
