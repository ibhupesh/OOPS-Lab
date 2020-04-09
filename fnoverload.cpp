#include<iostream>
using namespace std;
class fnoverload{
public: void hello(){
  cout<<"Hello world"<<endl;
}
public: void hello(int n){
  cout<<"Ten times of the numnber = "<<n*10<<endl;
}
public: void hello(string name){
  cout<<"Have a good day "<<name<<endl;
}};
int main() {
  fnoverload obj;
  cout<<"Enter your name and a numnber"<<endl;
  string n; int a;
  cin>>n>>a;
  obj.hello();
  obj.hello(a);
  obj.hello(n);
  return 0;
}
