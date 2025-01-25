#include<iostream>
using namespace std;
int  first_occurence(int arr[], int size, int key){
    int ans=-1;
      int start = 0;
      int end = size-1;
      int mid = start+((end-start)/2);
      while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1; 
        }
       else if(arr[mid]>key){
            end = mid-1;
        }
        else{
            start=mid+1;
        }
         mid = start+((end-start)/2);
      }
return ans;
}
int  last_occurence(int arr[], int size, int key){
    int ans=-1;
      int start = 0;
      int end = size-1;
      int mid = start+((end-start)/2);
      while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1; 
        }
       else if(arr[mid]>key){
            end = mid-1;
        }
        else{
            start=mid+1;
        }
        mid = start+((end-start)/2);
      }
return ans;
}
int main(){
    int even[6]={1,1,1,2,3,4};
    int odd[5]={1,2,2,2,4};
     int s = first_occurence(odd,5,2);
     int l = last_occurence(odd,5,2);
      int t = (l-s)+1;
    cout<<"the first occurence of the 1 is at the index:"<<first_occurence(even,6,1)<<endl;
    cout<<"the first occurence of the 2 is at the index:"<<first_occurence(odd,5,2)<<endl;
    cout<<"the last occurence of the 1 is at the index:"<<last_occurence(even,6,1)<<endl;
    cout<<"the last occurence of the 2 is at the index:"<<last_occurence(odd,5,2)<<endl;
    cout<<"the total no. of occurance of 1:"<<t<<endl;
return 0;
}