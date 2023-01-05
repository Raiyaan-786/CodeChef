#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t ; 
	cin>>t ;
	while(t--){
	    int n , sum = 0 , count0 = 0 , count1 = 0 , count11 = 0;
	    cin>>n ;
        int a[n] ;
        for(int i = 0 ; i<n ;i++){
            cin>>a[i] ;
            if(a[0] == 1 && a[i+1] == 1){
                count11++ ;
            }
            if(a[i] == 0 ){
                sum+= 1100 ;
                count0++ ;
            }
            else{
                count1++ ;
            }
        }
        if(a[0] == 0 && count0 != n){
            sum += 100*(count1) ;
        }
        if(a[0] == 1 && count1 != n ){
            sum += 100*(count1 - count11) ;
        }

        cout<<sum<<endl; 
	}
	return 0;
}
