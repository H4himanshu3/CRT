#include<iostream>
using namespace std;
int main()
{
    int count=0;
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    for(int k=0; k<n; k++)
    {
        cin>>arr[k];
    }
    if(arr[0]==0)
    {
        cout<<-1;
        return -1;
    }
    int i=0;
    while(i<n)
    {
        if(arr[i]==0)
        {
            cout<<count;
            return count;
        }
        i=i+arr[i];
        count++;
    }
    cout<<count;
return 0;

}