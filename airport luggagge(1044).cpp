#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        if(a+b+c>d+e){
            cout<<"NO\n";
        }
        else {
if((a+b<=d&&c<=e)||(a+c<=d&&b<=e)||(c+b<=d&&a<=e)){
    cout<<"YES\n";
}
else cout<<"NO\n";
        }
    }
    
}