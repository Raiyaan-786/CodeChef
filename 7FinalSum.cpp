#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin>>t ;
	while(t--){
	    int n , q , sum = 0 ;
	    cin>>n>>q ;
	    int arr[n];
	    for(int i = 1 ;i<=n ;i++){
	        cin>>arr[i];
	        sum += arr[i] ;
	    }
	    for(int i = 0 ;i<q ;i++){
	        int l , r ;
            cin>>l>>r ;
	        int w = r-l ;
	        if(w == 0){
	            sum++ ;
	        }
	        else if(w % 2 == 0) {
	            sum++ ;
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
