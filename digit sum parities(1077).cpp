#include<iostream>
using namespace std;
int digitsum(int n){
    int sum=0;
    while(n!=0){
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x=digitsum(n);
        int y=n+1;
        int z=n+2;
        if((x+digitsum(y))%2==0){
            cout<<z<<endl;
        }
        else cout<<y<<endl;
    }
 
}