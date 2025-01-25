#include<iostream>
using namespace std;
int main(){
    int arr[5]={0,1,2,0,1};
    int start = 0;
      int end = 4;
      int mid = start+(end-start)/2;
       while(start<end)
       {
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end = mid;
        }
        mid = start+(end-start)/2;
       }
        cout<<"the peak  element is :"<<start;
       return 0;
}