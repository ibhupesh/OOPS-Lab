#include<iostream>
using namespace std;
int main() {
cout<<"Enter any number"<<endl;
int n,k,p=0;
cin>>n;
k=n;
while(n!=0){
  p=p*10+(n%10);
  n=n/10;
}
if(k==p)
cout<<"The number is palindrome"<<endl;
else
cout<<"The number is not palindrome"<<endl;
}
