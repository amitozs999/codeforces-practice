#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    while(t--){
       long long int n;
       cin>>n;
       long long int sum=n*(n+1)/2;
       long long int currentPower=1; //pow(2,0)
       while(currentPower<=n){
           
           sum-=currentPower*2;
           currentPower*=2;
        }
        
        cout<<sum<<endl;
          
    }
    
    
}