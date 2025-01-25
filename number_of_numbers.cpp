#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int e=0,o=0,p=0,m=0;
    for(int i = 0; i<=n ; i++){
if(i%2==0){e++;}
else{o++;}
if(i>0){p++;}
else if(i<0){m++;}
    }
    cout<<"Even:"<<e<<endl;
    cout<<"Odd:"<<o<<endl;
    cout<<"Positive:"<<p<<endl;
    cout<<"Negative:"<<m<<endl;

}