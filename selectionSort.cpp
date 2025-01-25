#include<iostream>
#include<utility>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    for(int l=0; l<n; l++)
{
    cin>>arr[l];
}
    for(int i=0; i<n-1; i++)
    {
        int minIndex = i ;
        for(int j = i+1; j<n; j++)
        {
            if(arr[minIndex]>arr[j])
            {
                minIndex=j;
            }
        }
    swap(arr[minIndex],arr[i]);
    }
for(int k=0; k<n; k++)
{
    cout<<arr[k]<<" ";
}
}
