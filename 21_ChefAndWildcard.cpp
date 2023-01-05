#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin>>t ; 
	while(t--){
	    string s , r ;
	    cin>>r>>s ;
        int sim = 0 , bothknown = 0 ;
	    for(int i = 0 ; i<s.length() ;i++){
            if(s[i] != r[i] && s[i] != '?' && r[i] != '?'){
                cout<<"NO"<<endl;
                break; 
            }
            else{
                if(s[i] == '?' || r[i] == '?'){
                    sim++ ;
                }
            }
            
        }
	}
	return 0;
}
