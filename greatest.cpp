#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the the three no."<<endl;
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<a<<" "<<"is the greatest no."<<endl;
    }
    else if(b>c){
        cout<<b<<" "<<"is the greatest no."<<endl;
    }
    else{
        cout<<c<<" "<<"is the greatest no."<<endl;
    }
}