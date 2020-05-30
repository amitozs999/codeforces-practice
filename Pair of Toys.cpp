#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
 
     ll n,k;
     cin>>n>>k;
     
     if(k<=n){
         cout<<(k-1)/2;
     }
     else if(n>k/2){
         ll mn=n-k;
         ll mx=n;
         cout<<(mn+mx+1)/2;
     }else{
         cout<<0;
     }
     
 
}