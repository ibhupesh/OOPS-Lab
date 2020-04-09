#include<iostream>
using namespace std;
class counter
{
  int n;
  static int count;
public: void getdata(int number)
{
  n=number;
  count++;
}
public: void showcount(){
  cout<<"Count :"<<count<<endl;
}
};

int counter:: count;
int main() {
  counter count[4];
  for(int i=0;i<4;i++)
  {
    count[i].showcount();
    count[i].getdata(i+10);
  }
  cout<<"Values after calling get function: "<<endl;
  for(int j=0;j<4;j++)
  count[j].showcount();
  return 0;
}
