#include<iostream>
using namespace std;
int bp(int arr[], int key, int s, int e )
{
    
    if(e>=s)
    {
      int mid = s+(e-s)/2;  
    
    if(arr[mid]==key)
    {
return mid;
    }
    if (arr[mid]>key)
    {
       return bp(arr,key,s,mid-1);
    }
    if(arr[mid]<key){
       return bp(arr,key,mid+1,e);
}
    }
return -1;
}
int main()  
{
    int s = 0;
    int e = 5;
    int arr[6]={3,6,7,9,10,14};
   int ans = bp(arr,9,0,5);
    cout<<ans;
}