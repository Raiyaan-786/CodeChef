#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t ; 
	cin>>t ;
	while(t--){
	    int n , total = 0  ;
	    cin>>n ;
	    string s ;
	    cin>>s ;
		string r ;
	    if(n % 2 != 0 ){
	        cout<<"NO"<<endl;
	    }
	    else{
	        for(int i = 0 ; i<n ; i++){
	            int count = 0 ;
	            for(int j = 1 ; j<n ; j++){
	                if(s[i]==s[j]){
						count++ ;
	                }
	            }
	            count++ ;
				if(count % 2 != 0){
					cout<<"NO"<<endl ;
					break; 
				}
				else{
					total+=count ;
				}
	        }
	    }
		if(total == n){
			cout<<"YES"<<endl; 
		}
	    
	}
	return 0;
}
