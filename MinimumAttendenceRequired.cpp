#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t ; 
	cin>>t ;
	while(t--){
	    int n  , count = 0 ; 
	    float result ;
	    cin>>n ;
	    string str ;
	    for(int i = 0 ; i<n ; i++){
	        if(str[i] == 1){
	            count++ ;
	        }
	    }
	    result = (count+(120 - n))*0.8333 ;
	    if(result < 75){
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
