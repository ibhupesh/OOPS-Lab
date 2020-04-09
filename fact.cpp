#include<iostream>
using namespace std; 
int main(){
int n,f;
f=1;
cout<<"Enter the number"<<endl;
cin>>n;
for(int i=1;i<=n;i++)
f=f*i;
cout<<"Factorial of "<<n<<" = "<<f<<endl;
return 0;

}
