#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int k,n,w;
    int sum=0;
    cin>>k>>n>>w;
    
    for(int i=1;i<=w;i++){
        
        sum=sum+k*i;
    }
    
    if(sum-n>0){
        cout<<sum-n;
        
    }else{
        cout<<"0";
    }
}