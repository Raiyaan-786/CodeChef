#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    int cc=0, cs=0, ce=0, m=0, h=0;
	   
	    string s; 
	    
	    for(int i=0; i<n; i++){
              cin>>s;
	        if(s == "cakewalk") cc++;
	        else if(s == "simple") cs++;
	        else if((s == "easy")) ce++;
	        else if((s == "medium") || (s == "easy-medium")) m++;
	        else h++;
	    }
	    
	    if((cc>=1) && (cs>=1) && (ce>=1) && (m>=1) && (h>=1)) cout<<"Yes"<<endl; 
	    else cout<<"No"<<endl;
	}
	return 0;
}
