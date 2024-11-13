#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
         int n,x,c;
   cin>>n>>x>>c;
   int arr[n];
      int count=0;
      int sum=0;
   for(int i=0;i<=n-1;i++){
       cin>>arr[i];
       if(x-arr[i]>c){
           arr[i]=x;
           count++;
       }
   }
    for(int i=0;i<=n-1;i++){
        sum=sum+arr[i];
    }
     cout<<sum-(count*c)<<endl;
    }
}