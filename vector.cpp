#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of vector"<<endl;
    cin>>n;
    vector<int> vector;
    for(int i = 0; i<n; i++){
        int p;
        cin>>p;
        vector.push_back(p);
    }
    for(int k = 0; k<n; k++){
        cout<<vector[k]<<" ";
    }

}