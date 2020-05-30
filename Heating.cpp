#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    
    int t;
    cin>>t;
    while(t--){
        
        ll c,sum;
        cin>>c>>sum;
        
        ll d=sum/c;
        ll rem=sum%c;
        ll ans=(c-rem)*pow(d,2)+rem*pow(d+1,2);
        cout<<ans<<endl;
        
    }
 
}