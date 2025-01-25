#include<iostream>
using namespace std;
int print(int a,int c)
{int c
   if(a<10) {
    c++;
    return c;}
   c++;
a%10+print(a/10);


}
int main()
{

int a;
cin>>a;
int sum=print(a,0);
cout<<sum;


}
//54321
//12345