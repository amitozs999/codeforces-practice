#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long int
typedef long double ld;
 
  int sumofDig(ll p) {
        int sum=0;
 
        while(p>0) {
            sum+=p%10;
            p=p/10;
        }
 
 
        return sum;
    }
 
 
int main(){
 
   ll n;
   cin>>n;
   vector<int> v;
   
   for(ll i=1;i<100;i++){
       
       if(sumofDig(n-i)==i){
           v.emplace_back(n-i);
       }
       
   }
        sort(v.begin(),v.end());
   
        if(v.size()==0) {
            cout<<0;
        }
 
        else {
            cout<<v.size()<<endl;
 
            for(int i=0;i<v.size();i++) {
                cout<<v[i]<<endl;
            }
        }
     
     
}
 