#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter the size  of array: ";
cin>>n;
int arr[n];
for(int i =0; i<n; i++){
    cin>>arr[i];
}
int l = 0;
int sum = 0;
int  r = n;
int max = -1000;
while(r<n)
{
sum = sum+arr[r];
if(max<sum){
    max = sum;
}
}
cout<<"the maximum sum is: "<<max;
}
