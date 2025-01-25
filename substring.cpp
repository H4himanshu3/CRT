#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the no.of letters"<<endl;
    cin>>n;
char s[n];
for(int a = 0 ; a<n ; a++){
    cin>>s[a];
}
cout<<endl;
    for(int i = 0; i<n;i++){
for(int j  = i; j<n ; j++){
    for(int k=i;k<=j;k++){
        cout<<s[k];
    }
    
  cout<<endl;  
}
   }
      
}