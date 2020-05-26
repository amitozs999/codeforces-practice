#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int t;
    cin>>t;
    while(t--){
        
        long long int a,b;
        cin>>a>>b;
    
        if(a%b==0){
            cout<<"0"<<endl;
        
        }else{
           
           if(a>b){
               int m=a%b;
               cout<<b-m<<endl;
               
           }else{
               cout<<b-a<<endl;
               
           }
        }
        
        
    }
    
}