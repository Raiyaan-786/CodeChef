#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void func(int ind , int n , vector<int> &ds , int product , vector<vector<int>> &ans){
    if(ds.size() == 3){
        if(product % n == 0){
            ans.push_back(ds);
            return ;
        }
    }
	for(int i = ind ; i<=n ; i++){
		if(n % i == 0){
			ds.push_back(i) ;
            product *= i ;
            func(ind + 1 , n/i , ds , product , ans);
            ds.pop_back() ;
            product /= i ;
            func(ind + 1 , n/i , ds , product ,ans );
		}
	}
}


int main() {
	// your code goes here
	int t ; 
	cin>>t ; 
	while(t--){
	    long long n ;
	    cin>>n ;
	    vector<int>ds;
	    vector<vector<int>> ans;
        func(2, n , ds , 1 , ans) ;
        if(ans.size() == 0){
            cout<<-1<<endl;
        }
        else{
            for(auto it : ans){
                for(auto itr : it){
                    cout<<itr<<" ";
                }
            }
            cout<<endl;
        }
        // Actual Ans
        // long long n , a = -1 , b = -1;
	    // cin>>n ;
	    // for(long long i = 2 ; i*i<n ;i++){
	    //     if(n%i == 0){
	    //         a = i ; 
	    //         b = n/i ;
	    //         break ;
	    //     }
	    // }
	    // if(a == -1){
	    //     cout<<-1<<endl;
	    // }
	    // else{
	    //     cout<<1<<" "<<a<<" "<<b<<endl;
	    // }
	}
	return 0;
}
