#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        sum=sum+a;
    }
    int count=0;
    for(int i=1;i<=5;i++)
    {
        if((sum+i)%(n+1)!=1){
            count++;
        }
    }
    cout<<count<<endl;
    
}