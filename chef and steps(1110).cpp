#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,ls;
    cin>>n>>ls;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
       
    }
    for(int i=0;i<=n-1;i++){
         if(arr[i]%ls==0){
             cout<<"1";
         }
         else cout<<"0";
    }
    cout<<endl;
        
        
    }
  
}