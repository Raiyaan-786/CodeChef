#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin>>t ;
	while(t--){
	    int m , n ;
	    cin>>m>>n ;
	    if(m%2 == 0 && n%2 == 0){
	        cout<<"0"<<endl;
	    }
	    if(m%2 != 0 && n%2 == 0){
            cout<<n<<endl;
	    }
        else if(m%2 == 0 && n%2 != 0 ){
            cout<<m<<endl;
        }
        else if(m%2 != 0 && n%2 != 0){
            cout<<m+(n-1)<<endl;
        }
	}
	return 0;
}