#include<iostream>
#include<algorithm>
using namespace std;
int max_point(int arr[],int size,int k){
    int l_sum=0;
    int r_sum=0;
    int max_sum=0;
    for(int i = 0; i<k; i++){
        l_sum = l_sum + arr[i];
        max_sum = l_sum;
    }
     int r_len=size-1;
     for(int a = k-1; a   0; a--){
        l_sum=l_sum-arr[a];
        r_sum=r_sum+arr[r_len];
        r_len= r_len-1;
        max_sum=max(max_sum,l_sum+r_sum);
     }
     return max_sum;
}
int main(){
int points[10]={3,3,3,10,10,2};


cout<<"the maximum point  you can get is:"<<max_point(points,6,3);
}