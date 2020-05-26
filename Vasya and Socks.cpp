#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    long long int n,m,count;
    cin>>n>>m;
    for(int i=1;i<=n+count;i++){
        
        if(i%m==0){
            count++;
        }
    }
    
    cout<<n+count;
}