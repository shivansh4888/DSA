#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
      int hl[n];
      int gl[n];
      int rgl[n];
      for(int i=0;i<=n-1;i++){
          cin>>hl[i];
      }
       for(int i=0;i<=n-1;i++){
          cin>>gl[i];
          rgl[n-1-i]=gl[i];
      }
      int ra[n];
      int rb[n];
      for(int i=0;i<=n-1;i++){
          ra[i]=gl[i]-hl[i];
          rb[i]=rgl[i]-hl[i];
      }
      int a=0;
      int b=0;
      for(int i=0;i<=n-1;i++){
          if(ra<0){
              a=1;
              break;
          }
      }
        for(int i=0;i<=n-1;i++){
          if(rb<0){
              b=1;
              break;
          }
      }
      if(a==0&&b==0) cout<<"both\n";
            if(a==1&&b!=1) cout<<"back\n";

      if(a==0&&b==1) cout<<"front\n";

      if(a==1&&b==1) cout<<"none\n";

    }
}