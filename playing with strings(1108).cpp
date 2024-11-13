#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     string str1;
     string str2;
     cin>>str1>>str2;
     int no_of_1_in_1=0;
      int no_of_1_in_2=0;
       int no_of_0_in_1=0;
        int no_of_0_in_2=0;
     for(int i=0;i<=n-1;i++){
         if(str1[i]=='1'){
             no_of_1_in_1++;
         }
         if(str1[i]=='0'){
             no_of_0_in_1++;
         }
     }
       for(int i=0;i<=n-1;i++){
         if(str2[i]=='1'){
             no_of_1_in_2++;
         }
         if(str2[i]=='0'){
             no_of_0_in_2++;
         }
     }
     if((no_of_1_in_1==no_of_1_in_2)&&(no_of_0_in_1==no_of_0_in_2)){
         cout<<"YES\n";
     }
     else cout<<"NO\n";
    }
}