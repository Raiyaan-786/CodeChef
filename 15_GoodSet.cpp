#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int arr[1000] , j = 0;
    for(int i = 0 ; i<1000 ; i++){
        if(i % 2 != 0){
            arr[j] = i ;
            j++ ; 
        }
    }
	int t ;
	cin>>t ;
	while(t--){
	    int n ;
	    cin>>n ;
        for(int i = 0 ; i<n ; i++){
            cout<<arr[i]<<" " ;
        }
        cout<<endl; 
	}
	return 0;
}
