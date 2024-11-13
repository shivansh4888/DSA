#include<iostream>
#include<cmath>
using namespace std;
int primecheck(int n){
    int a=1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            a=0;
            break;
            // a==0 agr n composite a==1 agr n prime
        }
    }
    return a;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        int count=0;
        for(int i=m;i<=n;i++){
            if(i==1){
                continue;
            }
          if(primecheck(i)){
            //   count++;
            cout<<i<<endl;
          }
        }
        cout<<endl;
    }
}