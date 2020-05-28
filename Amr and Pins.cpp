
#include<bits/stdc++.h>
using namespace std;
int main(){
 
   double r,x0,y0,x1,y1;
   cin>>r>>x0>>y0>>x1>>y1;
   double l=pow(abs(x0 - x1), 2) + pow(abs(y0 - y1), 2);
   double length=sqrt(l);
   int ans=ceil(length/(2*r));
   cout<<ans;
   
}