#include<iostream>
using namespace std;
int main(){
    char sym;
    cout<<"Enter the symbol:"<<endl;
    cin>>sym;
    int c;
    cout<<"Enter the count:"<<endl;
    cin>>c;
    int arr[c];
    for(int i = 0; i<c; i++){
        cin>>arr[i];
    }
    for(int k = 0; k<c; k++){
    for(int j = 1; j<=arr[k];j++)
    {
        cout<<sym;
    }
    cout<<endl;}
    
}