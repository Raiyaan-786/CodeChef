#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin>>t ;
	while(t--){
	    int n , count0 = 0 , count1 = 0 , count2 = 0;
	    cin>>n ;
	    string s ;
	    cin>>s ;
	    for(int i = 0 ; i < n ; i++){
	        if(s[i] == s[i+1]){
	            count2++ ;
	        }
    	    else if(s[i] == '0' && s[i+1] == '1'){
    	       if(s[i+2] == '1'){
    	           continue ;
    	       }
    	       else{
    	           count0++ ;
    	       }
    	    } 
    	    else if(s[i] == '1' && s[i+1] == '0'){
    	       count1++ ;
    	    }
	    }
	    if(count2 == n-1){
	        cout<<"0"<<endl;
	    }
	    else{
	        if(count0 == 0){
	            cout<<count1<<endl;
	        }
	        else if(count1 == 0){
	            cout<<count0<<endl; 
	        }
	        else if(count0 <= count1){
	            cout<<count0<<endl;
	        }     
	        else if(count0 >= count1){
	            cout<<count1<<endl;
	        }
	    }
	}
	return 0;
}
