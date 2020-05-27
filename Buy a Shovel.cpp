#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int k,r;
    cin>>k>>r;
    for(long long int i=1;i<=1000;i++){
        
        if((k*i)%10==0 || (k*i)%10==r){
            cout<<i;
            break;
        }
        
    }
    
    
}