#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<=n-1;i++){
         cin>>arr[i];
     }
     int m;
     cin>>m;
     int x=arr[m-1];
     for(int i=0;i<=n-1;i++){
         for(int j=0;j<=n-2-i;j++){
             if(arr[j]>arr[j+1]){
                 swap(arr[j],arr[j+1]);
             }
         }
     }
     for(int i=0;i<=n-1;i++){
         if(arr[i]==x){
             cout<<i+1<<endl;
             break;
         }
        
     }
    }
}