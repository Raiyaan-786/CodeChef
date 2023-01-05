#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t ;
    while(t--){
        int n , m , a , j = 2 ;
        cin>>n>>m;
        set <int> chef , ast , hash;
        set <int> :: iterator itr ;
        for(int i = 1 ; i<=n ;i++){
            hash.insert(i) ; 
        }
        for(int i = 1 ; i<=m ; i++ ){
            cin>>a;
            hash.erase(a);
        }
        for(itr = hash.begin() ; itr!= hash.end() ; itr++){
            if(j % 2 == 0){
                chef.insert(*itr) ;
                j++;
            }    
            else{
                ast.insert(*itr) ;
                j++;
            }
        }
        if(chef.size() != 0 ){
            for(itr = chef.begin() ; itr!=chef.end() ; itr++){
                cout<<*itr<<" " ;
            }
        }  
        else{
            cout<<"-1"<<endl;
        }  
        cout<<endl;  
        if(ast.size() != 0){
            for(itr = ast.begin() ; itr!=ast.end() ; itr++){
                cout<<*itr<<" " ;
            }
            cout<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }  
    }
    return 0;
}