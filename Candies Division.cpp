#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long int t,n,k;
    
    cin>>t;
    while(t--){
    
    cin>>n>>k;
    
    int equalPart=n/k;
    int largePart=equalPart+1;
    int remain=n%k;
    int largePartCount=k/2;
    if(remain>largePartCount){
        cout<<n+(largePartCount-remain)<<endl;
    }else{
        cout<<n<<endl;
    }
 
    
    }
    
    
    
    
}