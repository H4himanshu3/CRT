#include<iostream>
using namespace std;
int count(int n)
{
if(n==0)
{
return 1;
}
if(n<0)
{
    return 0;
}
return count(n-1)+count(n-2)+count(n-3)+count(n-4)+count(n-5)+count(n-6);
}
int main()
{
    cout<<"Enter the target sum"<<";"<<endl;
    int n;
    cin>>n;
    int ans = count(n);
    cout<<"the no. of ways:"<<ans;
    return 0;
}