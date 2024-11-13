#include<iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long p;
        float q;
        int x,y,z;
        cin>>p>>x>>y>>z;
        if(z==1){
           q= (p*y*1.0/100)+p;
          
        }
        else{
              q= -(p*x*1.0/100)+p;
          
        }
      cout<<fixed<<setprecision(10)<<q<<endl;
    }
}