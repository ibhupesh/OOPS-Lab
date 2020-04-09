#include<iostream>
using namespace std;
class array {
public: void print(int a[]){
  for(int i=0;i<5;i++)
  cout<<a[i]<<" ";
  cout<<endl;
}
};
int main(){
  cout<<"The length of array = 5"<<endl;
  int a[5];
  for(int i=0;i<5;i++)
  {
    cout<<"Enter the "<<i<<" element of array"<<endl;
    cin>>a[i];
  }
  array obj;
  obj.print(a);
  return 0;
}
