#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int main(){
    
  long long int x,y,n;
  cin>>x>>y>>n;
  
  long long int arr[7];
  arr[0]=x;
  arr[1]=y;
  arr[2]=y-x;
  arr[3]=-x;
  arr[4]=-y;
  arr[5]=x-y;
  n=(n-1)%6;
  cout<<(arr[n]+mod+mod+mod+mod+mod)%mod;
}