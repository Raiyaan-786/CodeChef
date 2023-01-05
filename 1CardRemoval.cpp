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
	    for(int i = 0; i<n ;i++){
	        cin>>a[i] ;
	    }
        for(int i = 1 ;i<11 ;i++){
            for(int k = 0 ; k<n ;k++){
                if(a[k] == i){
                    count++ ;
                }
            }
			// cout<<"No. of "<<i<<" is "<<count<<endl;
            if(count >= maxm){
                maxm = count ;
            }
			count = 0 ;
        }
		// cout<<maxm<<endl;
        cout<<(n-maxm)<<endl;
	}
	return 0;
}