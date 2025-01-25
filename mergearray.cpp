#include<iostream>
using namespace std;
int main()
{ 
    int arr[6]={1,2,3,4,5,6};

int k;
cout<<"enter the size of window"<<endl; 
cin>>k;                                                  
    int l = 0;
    int r = k;
    int sum = 0;
    for(int i  = l;i<r;i++)
    {
        sum= sum+arr[i];
    }
    
    while(r<6){
        sum=sum-arr[l]+arr[r];
        r++;
        l++;
        cout<<sum<<endl;
    }



}