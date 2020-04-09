#include<iostream>
using namespace std;
int main() {
int n;
cout<<"Enter the number"<<endl;
cin>>n;
int c=2;
for(int i=2;i<n;i++){
if(n%i==0)
c++;
}
if(c==2)
cout<<"Number is prime"<<endl;
else
cout<<"Number is not prime"<<endl;
if(n%2==0)
cout<<"Number is even"<<endl;
else 
cout<<"Number is odd"<<endl;
}
