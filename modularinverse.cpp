#include<iostream>
using namespace std;
int main(){
 int a,b;
 cin>>a>>b;
  int p=b;
  int t=a;
  int q,r;
  int t1,t2;
  int g;
   t1=0;t2=1;
  while(t!=0){
  q=p/t;
  r=p%t;
  g=t1-(t2*q);
   p=t;
   t=r;
   t1=t2;
   t2=g;
}
  t1=(t1%b+b)%b;
  cout<<"modular inverse of a mod b is "<<t1;
  return 0;
}