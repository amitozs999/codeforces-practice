
#include<bits/stdc++.h>
using namespace std;
int main(){
 
   int t;
   cin>>t;
   while(t--){
       
   long long int n,k;
   cin>>n>>k;
   int arr[n];
   int min=INT_MAX;
   
   for(int i=0;i<n;i++){
       cin>>arr[i];
        if(arr[i]<min){
           min=arr[i];
       }
    }
    
    int B=min+k;
    int flag=0;
    
    for(int i=0;i<n;i++){
        if(abs(B-arr[i])<=k){
           
       }
       else{
           flag=1;
           break;
       }
    }
    
    if(flag==0)
    {
        cout<<B<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
    
   
   
   }
   
    
}