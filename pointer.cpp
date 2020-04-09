#include<iostream>
using namespace std;
int main() {
int a[]={1,2,3,4,5};
int *p=&a[0];
int n;
cout<<"Total number of elements =5"<<endl;
for (int j=0;j<5;j++){
cout<<a[j]<<" "<<endl;
}
cout<<"Enter the index no. you want to print"<<endl;
cin>>n;
if(n<4){
for(int i=0;i<n;i++)
*p++;
cout<<"The required value at the entered index = "<<*p<<endl;
}
else 
cout<<"Value out of index";
return 0;
}
