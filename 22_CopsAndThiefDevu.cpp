#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int hash[101] ;
	for(int i = 1 ; i<=101 ; i++){
	    hash[i] = 1 ;
	}
	int t ; 
	cin>>t ;
	while(t--){
	    int m , x , y , count = 0  ; 
	    cin>>m>>x>>y ; 
	    int arr[m] ;
	    int total = x * y ;
	    for(int i = 0 ; i<m ; i++){
	        cin>>arr[i] ;  
            for(int j = 1 ; j<=total ; j++){
                hash[arr[i]] = 0 ; 
                int k = arr[i]-j ;
                int l = arr[i]+j ;
                if(k>0){
                    hash[k] = 0 ; 
                }
                if(l<101){
                    hash[l] = 0 ;
                }
            }
	    }
        for(int i = 0 ; i<101 ; i++){
            if(hash[i] == 1){
                count++ ;
            }
        }
        cout<<count<<endl ;
	}
	
	return 0;
}
