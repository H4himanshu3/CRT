#include<iostream>
using namespace std;
int main(){
    int row,col;
    for(row = 5;row<5;row++){
        for(col=row;col>=1;col--)
        {
            cout<<"*";
        }
        cout<<" "<<endl;
    }
    for(row=5;row>=1;col++){
        for(col=5-row;col>0;col--){
            cout<<" ";
        }
        for(col=row;col>=1;col--){
cout<<"*";
        }
        cout<<endl;
    }}