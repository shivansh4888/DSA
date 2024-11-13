#include <iostream>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
    int arr[26];
    for(int i=0;i<=25;i++){
        cin>>arr[i];
    }
    string str;
    cin>>str;
    int hsh[26]={0};
    for(int i=0;i<=str.size()-1;i++){
        hsh[int(str[i])-97]++;
   
       
    }
    int price=0;
    for(int i=0;i<=25;i++){
        if(hsh[i]==0){
           
            price=price+arr[i];
        }
}
cout<<price<<endl;
  
}
}