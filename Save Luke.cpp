#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef long double ld;
int main(){
 
 ld d,L,v1,v2;
 cin>>d>>L>>v1>>v2;
 
 ld distanceCanMove=L-d;
 ld velocity=v1+v2;
 cout<<setprecision(20)<<distanceCanMove/velocity;
 
 
}