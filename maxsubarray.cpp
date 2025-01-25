#include<iostream>
using namespace std;
int main (){
    int n;
      int max  =  -1000;
    cout<<"Enter the no.of letters"<<endl;
    cin>>n;
int s[n];
for(int a = 0 ; a<n ; a++){
    cin>>s[a];
}
cout<<endl;
    for(int i = 0; i<n;i++){
for(int j  = i; j<n ; j++){
    for(int k=i;k<=j;k++){
        cout<<s[k];
         }
         if(s[j]>max){
            max=s[j];
    }
    cout<<endl;
    cout<<"The maximum elements in the  subarrays:"<<s[j];

    
  cout<<endl;  
}
   }
          
      
}