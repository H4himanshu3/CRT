#include<iostream>
using namespace std;
int main()
{
int arr[6]={1,2,3,4,5,6};

int i = 0;
int j = 5;
int  target = 6;
int count = 0;

while(i<j && i!=j)
{
    
    if(arr[i]+arr[j]==target){
        i++;
        j--;
        count++;
        
    }
    else  if(arr[i]+arr[j]<target){i++;}
    else{j--;}
    if(i==j){break;}


cout<<"the  pair is :"<<i<<","<<j<<endl;
}

 
cout<<"the no. of pairs is :"<<count;
}
