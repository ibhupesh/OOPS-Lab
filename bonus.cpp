#include<iostream>
using namespace std;
int main() {
cout<<"A for company 1, B for company 2, D for both"<<endl;
char co;
cout<<"Enter the company"<<endl;
cin>>co;
double s1,s2,s3,b;
if(co=='B'){
cout<<"Enter monthly salary of employee of comapny 1"<<endl;
cin>>s1;
b=(s1*10)/100;
cout<<"Bonus = Rs."<<b<<endl;
s1=s1+b;
cout<<"Salary wtih 10% bonus = Rs."<<s1<<endl; }
else if(co=='A'){ 
cout<<"Enter monthly salary of employee of comapny 2"<<endl; 
cin>>s2;
b=(s2*7)/100;
cout<<"Bonus =Rs."<<b<<endl;
s2=s2+b; 
cout<<"Salary wtih 7% bonus = Rs. "<<s1<<endl; }
else if(co=='D'){ 
cout<<"Enter monthly salary of employee of comapny 1"<<endl; 
cin>>s1; 
cout<<"Enter monthly salary of employee of comapny 2"<<endl;
cin>>s2; 
s3=s1+s2;
b=(s3*5)/100;
cout<<"Bonus =Rs."<<b<<endl;
s3=s3+b;
cout<<"Salary after a bonus of 5% on both the salaries = Rs."<<s3<<endl; 
}else cout<<"WRONG CHOICE";
return 0;
}
