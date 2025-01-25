#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    int PSA[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    PSA[0]=arr[0];
    for(int j=1;j<n;j++)
    {
PSA[j]=PSA[j-1]+arr[j];
    }
    for(int k=0; k<n; k++)
    {
        cout<<PSA[k]<<" "<<endl;;
    }//OUTSPACE
    

}