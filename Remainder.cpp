#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
 
    string s;
    int n, x, y;
    cin >> n >> x >> y >> s;
 
    reverse(s.begin(), s.end());
 
    int count = 0;
    for(int i = 0; i < x; i ++){
 
     if(i==y&&s[i]=='0') count++;
     if(i!=y&&s[i]=='1') count++;
    
    }
    cout <<count<<endl;
 
 
}