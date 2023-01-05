#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t ; 
	cin>>t ; 
	while(t--){
	    int n , x = 0 , y = 0; 
	    cin>>n; 
	    string s ; 
	    cin>>s ;
	    for(int i = 0 ;i<n ;i++){
	        if(s[i] == 'L' && s[i+1] != 'L' && s[i+1] != 'R'){
	            x -= 1 ;
	        }
	        else if(s[i] == 'R' && s[i+1] != 'L' && s[i+1] != 'R'){
	            x += 1 ;
	        }
	        else if(s[i] == 'U' && s[i+1] != 'U' && s[i+1] != 'D'){
	            y += 1 ;
	        }
	        if(s[i] == 'D' && s[i+1] != 'U' && s[i+1] != 'D'){
	            y -= 1 ;
	        }
	    }
        cout<<x<<" "<<y<<endl;
	}
	return 0;
}
