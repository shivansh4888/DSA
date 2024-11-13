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
        int count=0;
        // for(int i=0;i<=n-1;i++){
            for(int j=0;j<=n-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    count++;
                }
            }
        // }
        // for(int i=0;i<=n-1;i++){
        //     cout<<arr[i]<<" ";
        // }
        if(count<=1){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
       
    }
}