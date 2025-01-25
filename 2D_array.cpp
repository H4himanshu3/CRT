#include<iostream>
using namespace std;
int main()
{
int a[4][4];
//input in 2d array
for(int i=0; i<4; i++)
{
for(int j = 0; j<4; j++)
{
    cin>>a[i][j];
}
}
//output in 2d array
for(int i=0; i<4; i++)
{
    for(int j = 0; j<4; j++)
    {
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}



}


