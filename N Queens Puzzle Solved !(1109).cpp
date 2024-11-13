#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<"enter n\n";
        int n;
        cin>>n;
        float p=0.143*n;
        float x=pow(p,n);
        // cout<<x<<endl;
        int y=int(x);
        // cout<<y;
        float q=x-y;
        if(q<0.5){
            cout<<y<<endl;
        }
        else cout<<y+1<<endl;
        
        
    }
  
}