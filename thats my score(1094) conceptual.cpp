#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int arr[8]={0};
    int n;
    cin>>n;
    for(int i=0;i<=n-1;i++){
        int m;
     cin>>m;
     int x=arr[m-1];
     cin>>arr[m-1];
     if(x>arr[m-1]){
         arr[m-1]=x;
     }
    }
    int sum=0;
     for(int i=0;i<=7;i++){
    sum=sum+arr[i];
     }
     cout<<sum<<endl;
}
}