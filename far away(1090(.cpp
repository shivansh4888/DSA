#include<iostream>
using namespace std;
long long absolute_value(long long n){
    if(n>=0) return n;
    else return n*(-1);
}
long long max_sum(long long n,long long m){
    if(absolute_value(n-1)>absolute_value(n-m)){
        return absolute_value(n-1);
    }
    else return absolute_value(n-m);
}
int main(){
int t;
    cin>>t;
    while(t--){
     long long n;
     long long  m;
        cin>>n>>m;
       long long arr[n];
      
        for(int i=0;i<=n-1;i++){
            cin>>arr[i];
        }
       long long distance=0;
        for(int i=0;i<=n-1;i++){
     distance=distance+max_sum(arr[i],m);
        }
        cout<<distance<<endl;
    }
}