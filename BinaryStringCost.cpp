#include <iostream>
#include <string.h>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin>>t ;
	while(t--){
	    int n , x , y , e = 0 , d = 0;
	    cin>>n>>x>>y;
	    string str[n] ;
	    cin>>str[n] ;
	    for(int i = 0 ; i<n ; i++){
	        if(str[i] == "1"){
	            if(str[i+1] == "0"){
	                d += 1 ;
	            }
	        }
	        else{
	            if(str[i+1] == "1"){
	                e += 1 ;
	            }
	        }
	    }
	    cout<<(e*x)+(d*y)<<endl;
	}
	return 0;
}
