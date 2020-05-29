#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
   
    ll n,sumX=0,sumY=0,flag=0;
    cin>>n;
    ll x[n+1];
    ll y[n+1];
    for(int i=0;i<n;i++){
        cin>>x[i];
        cin>>y[i];
        sumX+=x[i];
        sumY+=y[i];
        if(x[i]%2!=y[i]%2) flag=1;
    }
    
    if(sumX%2==0&&sumY%2==0){
        cout<<"0";
    }
    else if(sumX%2==1 && sumY%2==1 && flag==1) {
        cout<<"1";
    }else{
        cout<<"-1";
    }
    
}