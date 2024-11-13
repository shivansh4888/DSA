#include<iostream>
using namespace std;
int main(){
  
       int a,b,c,d;
       cin>>a>>b>>c>>d;
       int arr[4]={a,b,c,d};
       for(int i=0;i<=3;i++){
           for(int j=i+1;j<=3;j++){
               if(arr[i]>arr[j]){
                   swap(arr[i],arr[j]);
               }
           }
       }
       float x=1.0*(arr[3])/arr[2];
         float y=1.0*(arr[1])/arr[0];
         if(x==y){
             cout<<"Possible\n";
         }
         else cout<<"Impossible\n";
        
}
