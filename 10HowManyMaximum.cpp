#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin>>t ;
	while(t--){
	    int n , count = 0 ; 
        cout<<"ENter the value of n "<<endl; 
	    cin>>n ;
	    string s ;
        cout<<"ENter the value of string "<<endl; 
	    cin>>s ;
	    for(int i = 1 ; i<n ;i++){
            if(s[1] == '1' || s[n-1] == '0'){
                count++ ;
                cout<<"1st cond"<<count<<endl ;
            }
	        if(s[i] == '0' && s[i+1] == '1'){
	            count++ ;
                cout<<"2st cond"<<count<<endl ;
	        }
	    }
	    cout<<count<<endl; 
	}
	return 0;
}
