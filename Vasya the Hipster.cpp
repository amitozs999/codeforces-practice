#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int a,b;
    cin>>a>>b;
    if(a==b){
        
        cout<<a<<" "<<"0";
        
    } else 
      if(a>b){
        
            cout<<b<<" "<<(a-b)/2;
            
       }
       else if(a<b){
           
            
            cout<<a<<" "<<(b-a)/2;
       
       }
 
    
}