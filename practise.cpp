#include<iostream>
using namespace std;
int main()
{
    int  arr[4]={3,2,1,1};
    int ans =0;
    for (int i = 0; i <= 3; i++) {
        ans = ans ^ arr[i];
    }

    
    for (int i = 1; i <= 3; i++) {
        ans = ans ^ i;
    }

    cout<<ans;
}
