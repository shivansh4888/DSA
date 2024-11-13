#include<iostream>
using namespace std;
const int m=1e5+10;
int hsh[m];
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<=n-1;i++){
            cin>>arr[i];
            hsh[arr[i]]++;
        }
        int a=0;
        for(int i=0;i<=m-1;i++){
           
            if(hsh[i]!=0&&hsh[i]!=i){
         a=1;
        }
        }
        if(a==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
}