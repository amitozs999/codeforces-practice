#include<bits/stdc++.h>
using namespace std;
int main(){
 
    int arr[5];
	cin>>arr[0]>>arr[1]>>arr[2];
	sort(arr,arr+3);
	
	if((arr[0]+arr[1])>arr[2]){
	
		cout << "0";
		
    }
	else {
		cout << arr[2]-arr[0]-arr[1]+1 <<endl;
	}
	
}