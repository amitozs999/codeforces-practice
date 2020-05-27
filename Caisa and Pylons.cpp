#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int n;
    cin>>n;
    int arr[n+1];
    arr[0]=0;
    for(int i=1;i<=n;i++){
        
        cin>>arr[i];
    }
  
  int sum=0;
  int count=0;
    for(int i=1;i<=n;i++){
        int h;
       
          h=arr[i-1]-arr[i];   
          sum+=h;
          if(sum<0){
              count+=abs(sum);
              sum=0;
          }
        
    }
    
        cout<<count;
  
    
    
}