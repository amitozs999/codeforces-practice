#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long int
typedef long double ld;
 
int main(){
 
   ll n,a,b,c;
   cin>>n>>a>>b>>c;
    if (a<=c || b<=c || n==1 )
        cout<<min(a,b)*(n-1);
    else
        cout<<min(a,b)+c*(n-2);
   