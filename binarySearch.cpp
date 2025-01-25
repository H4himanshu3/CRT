#include<iostream>
using namespace std;
binarySearch(int arr[], int size, int key){
      int start = 0;
      int end = size-1;
      int mid = (start+end)/2;
      while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]>key){
            end = mid-1;
        }
        else{
            start=mid+1;
        }
        mid = (start+end)/2;
      }
return -1;
}
int  main()
{
    int even[6]={12,34,67,89,90,97};
    int odd[5]={12,34,67,89,90};
int index=binarySearch(even,6,97);
cout<<"the index of the 97 is:"<<index;
cout<<"the index  of  67:"<<binarySearch(odd,5,67);

}