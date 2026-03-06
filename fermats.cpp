#include<iostream>
#include<numeric>
using namespace std;
int pow(int a,int n){
    int num=1;
    if( n<0)return 1;
    for(int i=0;i<n;i++){
        num=num*a;
    }
    return num;
}
int main(){
    int a,p;
    cin>>a>>p;
    if(gcd(a,p)==1){
        int leftfermatside=pow(a,p-1);
        int result=leftfermatside%p;
        if(result==1){
            cout<<"fermat satsified"<<endl;
        }
        else{
            cout<<"fermat not satisfied"<<endl;
        }
    }
    else{
        cout<<"fermat not satisfied"<<endl;
    }
    return 0;
}