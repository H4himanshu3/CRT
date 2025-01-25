#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no. you want to print the table:"<<endl;
    cin>>n;
    for(int i = 1; i<=12; i++){
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
}