#include<iostream>
using namespace std;
int main(){
    int n;
    int count = 0;
    cout<<"Enter the the no.of elements in the array"<<endl;
    cin>>n;
    int target;
    cout<<"Enter the target sum"<<endl;
    cin>>target;
    int arr[n];
    for(int a=0; a<n ; a++){
        cin>>arr[a];
    }
    for(int i = 0; i<n ; i++){
        for(int j = i+1; j<n-i; j++){
            for(int k = j +1; k<n; k++){
            if(arr[i]+arr[j]+arr[k]==target){
               ++count; 
            }}
        }
    }
    if(count==0){
        cout<<"No pair found"<<endl;
    }
    else{
        cout<<"the no. of pairs are:"<<count;
    }

}