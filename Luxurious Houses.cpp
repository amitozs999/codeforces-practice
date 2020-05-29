#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
 
    ll n;
    cin>>n;
    ll a[n];
	for (ll i=0;i<n;i++){
		cin>>a[i];
	}
	ll mx=0;
	for (ll i=n-1;i>=0;i--){
		if (a[i]<=mx){
			a[i]=mx-a[i]+1;
		}
		else {
			mx=a[i];
			a[i]=0;
		}
	}
	
	for (ll i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
    
    
    
}