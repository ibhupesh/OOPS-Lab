#include<iostream>
using namespace std;
class biodata{
public: int p,n;
public: string na;
public: int t=0;
public: int m[];
public: void get();
public: void cal();
public: void dis();
};
void biodata :: get(){
  cout<<"Enter the name of the student"<<endl;
  cin>>na;
  cout<<"Enter the roll number"<<endl;
  cin>>n;
  for(int i=0;i<5;i++){
    cout<<"Enter the marks of "<<i+1<<" subject"<<endl;
    cin>>m[i];
  }
}
void biodata:: cal(){
  for(int i=0;i<5;i++){
    t=t+m[i];
  }
  p=t/5;
}
void biodata:: dis(){
  cout<<"Name: "<<na<<endl;
  cout<<"Roll Number: "<<n<<endl;
  cout<<"Total Marks: "<<t<<"/500"<<endl;
  cout<<"Percentage: "<<p<<endl;
}
int main(){
  cout<<"Enter the number of students "<<endl;
  int ne;
  cin>>ne;
  biodata obj[ne];
  for(int i=0;i<ne;i++){
    obj[i].get();
    obj[i].cal();
  }
  for(int i=0;i<ne;i++){
    obj[i].dis();
  }
  return 0;
}
