#include<iostream>
using namespace std;
pivot_element(int arr[],int size){
int s  = 0;
int e = size-1;
int mid = s+(e-s)/2;
while(s<e){
if(arr[mid]>=arr[0]){s=mid+1;}
 else{e=mid;}
 mid = s+(e-s)/2;
}
return mid;
}




int main(){
int arr[5]={3,8,10,17,1};
cout<<"the pivot element  present at  the index :"<<pivot_element(arr,5);
}