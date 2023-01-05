#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t; 
	cin>>t ;
	while(t--){
	    int a , b , c , d ;
	    cin>>a>>b>>c>>d ;
	    int e = min(a,b) , f = min(a,c) ;
	    if(a+b+c <= d){
	        cout<<"1"<<endl;
	    }
	    else{
	        if(e+f<=d){
	            cout<<"2"<<endl;
	        }
	        else{
	            cout<<"3"<<endl;
	        }
	    }   
	}
	return 0;
}
