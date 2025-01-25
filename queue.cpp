#include<iostream>
#include<queue>
using namespace std;
void arraytoqueue(int arr[],int size)
{
    queue<int>q;
     for(int i = 0; i<size; i++)
     {
        q.push(arr[i]);
     }
      cout<<"the element in the queue:"<<endl;
      while(!q.empty())
      {
         cout<<q.front();
         q.pop();
      }
      cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter the size array"<<endl;
    cin>>n;
    int arr[n];
    for(int a = 0; a<n; a++)
    {
      cin>>arr[a];
    }
    arraytoqueue(arr,n);
}