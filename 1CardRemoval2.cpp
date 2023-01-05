#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin>>t ;
	while(t--){
	    int n , count = 0 , maxm = 0;
	    cin>>n ;
	    int a[n] ;
        for(int i = 0 ;i<n ;i++){
            cin>>a[i];
        }
	    int has[11] ;
	    for(int i = 0; i<11 ; i++){
	        has[i] = 0 ;
	    }
        for(int i = 0 ;i<n ; i++){
            has[a[i]]++ ;
        }
        for(int i = 1 ;i<11 ; i++){
            cout<<has[i]<<" ";
        }
        for(int i = 1 ;i<11 ; i++){
            if(has[i] >= maxm){
                maxm = has[i] ;
            }
        }
        cout<<endl;
        cout<<maxm<<endl;
        cout<<n-maxm<<endl;
    }    
    return 0 ;
}    