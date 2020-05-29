#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
 
 int t;
 cin>>t;
 while(t--){
     
     ll n,g,b,count;
     cin>>n>>g>>b;
     if(n%2==0){
         count=n/2;
     }else{
         count=n/2+1;
     }
     ll ans;
   
     if(count%g==0){
         
         ans=count+((count/g)-1)*b;  //count+no of b's there in between
         
      }else{
          
          ans=count+(count/g)*b;
          
      }
      
      cout<<max(n,ans)<<endl;
   
 }
    
}