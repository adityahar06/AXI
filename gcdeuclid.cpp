#include<iostream>
#include<climits>
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
    // p repersent maximum and t means minimum
    int p=maxi;
    int t=mini;
    int q,r;// q means quotienr and r means remiander
    while(t!=0){
       //  calcualitng
        q=p/t;
        r=p%t;
        // now shifitng
        p=t;
        t=r;
    }
    // after becoming 
    cout<<p<<endl;
    return 0;
}