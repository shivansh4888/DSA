#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int ma,mb;
        cin>>ma>>mb;
        int sa=0;
        int sb=0;
    for(int i=1;i<=ma+mb;i++){
       if(i%2!=0){
           sa=sa+i;
           if(sa>ma){
               cout<<"BOB"<<endl;
               break;
           }
       }
       if(i%2==0){
           sb=sb+i;
           if(sb>mb){
        cout<<"LIMAK"<<endl;

               break;
           }
       }
    }
    }
}