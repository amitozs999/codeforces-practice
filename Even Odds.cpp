#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int n,k;
    long long int mid;
    cin>>n>>k;
    if(n%2==0){
        
        mid=n/2;
        
        if(k<=mid){
            
            cout<<2*k-1;
            
        }else{
            cout<<2*(k-mid);
            
        }
        
    }else{
        
         mid=(n/2)+1;
         if(k<=mid){
            
            cout<<2*k-1;
             
         }else{
             
              cout<<2*(k-mid);
             
         }
    }
    
}