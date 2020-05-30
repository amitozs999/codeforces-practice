#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    
    ll n,k;
    cin>>n>>k;
    if(n+1%k==0){
        cout<<n+1;
    }
    else {
        
        ll x=n%k;
        cout<<(n-x)+k;
    }
 
}