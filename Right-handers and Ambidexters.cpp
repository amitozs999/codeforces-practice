#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    
    ll l,r,a;
    cin>>l>>r>>a;
    
    if(l==r){
        cout<<l*2+a-(a%2);
     }else{
         ll mn=min(l,r);
         ll mx=max(l,r);
         while(mn<mx&&a!=0){
             mn++;
             a--;
         }
         cout<<mn*2+a-(a%2);
     }
    
}