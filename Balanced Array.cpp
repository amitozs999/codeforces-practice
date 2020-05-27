#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    while(t--){
        
        long long int n;
        cin>>n;
        if((n/2)%2!=0||n==2){
            
            cout<<"NO"<<endl;
        }else{
            
            long long int e=2;
            long long int o=1;
            int sumEven=0;
            int sumOdd=0;
            cout<<"YES"<<endl;
            for(int i=0;i<n/2;i++){
               
                 cout<<e<<" ";
                 sumEven+=e;
                 e+=2;
            }
             for(int i=n/2;i<n-1;i++){
               
                 cout<<o<<" ";
                 sumOdd+=o;
                 o+=2;
            }
            cout<<sumEven-sumOdd;
            
         
            cout<<endl;
            
        }
        
    }
    
    
}