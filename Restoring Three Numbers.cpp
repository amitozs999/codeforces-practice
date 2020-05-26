#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    int arr[4];
    long long  int maxIndex;
    long long int max=0;
    for(int i=0;i<4;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
            maxIndex=i;
        }
    }
    
    for(int j=0;j<4;j++){
        
        if(j==maxIndex){
            
        }else{
            cout<<arr[maxIndex]-arr[j]<<" ";
        }
    }
 
    return 0;
    
}