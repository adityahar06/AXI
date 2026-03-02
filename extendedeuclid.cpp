#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int maxi,mini;
    if(a>b){
        maxi=a;
        mini=b;
    }
    else{
        mini=a;
        maxi=b;
    }
    int p=maxi;
    int t=mini;
    int q,r;
    int s1,s2,t1,t2;
    int s,g;
    s1=1,s2=0;t1=0;t2=1;
    while(t!=0){
       q=p/t;
       r=p%t;
       s=s1-(s2*q);
       g=t1-(t2*q);
       p=t;
       t=r;
       s1=s2;
       s2=s;
       t1=t2;
       t2=t;
    }
    cout<<"gcd of a and b is "<<" "<<p<<" "<< " it can be expressed as ax+by where "<<" "<<"a="<<s1<<" and "<<"b="<<t1<<endl;
    return 0;
}