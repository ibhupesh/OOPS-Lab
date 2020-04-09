#include<iostream>
using namespace std;
class Complex {
private: int real, img;
public:
  Complex() {
  real=0;
  img=0;
}
 Complex(int r, int i){
  real=r;
  img =i;
}
 void Display(){
  cout<<"Complex number: "<<real<<" + "<<img<<"i"<<endl;
}
Complex operator +(){
  real++;
  img++;
  return Complex(real,img);
}
};
int main(){
  Complex C(3,4);
  C.Display();
  cout<<"After unary operator"<<endl;
  +C;
  C.Display();
}
