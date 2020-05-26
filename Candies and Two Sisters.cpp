#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int t;
    cin>>t;
    while(t--){
        
        long long int n,m;
        cin>>n;
        if(n==1 || n==2){
            cout<<"0"<<endl;
        }
        else{
         
         m=(n/2)+1;
         cout<<n-m<<endl;
         
            
        }
        
        
        
    }
    
}
}