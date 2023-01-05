#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ; 
    cin>>t ; 
    while(t--){
        long long int n , diff1 , diff2 , count = 0 , counter_vowel = 0 , mod = 1e9 + 7 ; ;
        int a = 97 , e = 101 , i = 105 , o = 111 , u = 117 ; 
        cin>>n ; 
        string s ; 
        cin>>s ;
        multiset <int> s1;
        multiset <int> :: iterator itr ; 
        for(int j = 0 ; j<n ; j++){
            int v = s[j] ;
            s1.insert(v); 
        }
        for(itr = s1.begin() ; itr!=s1.end() ; itr++){
            if(*itr == a || *itr == e || *itr == i || *itr == o || *itr == u){
                counter_vowel++ ;
            }
            else{
                if(*itr<101){
                    diff1 = e - *itr ;
                    diff2 = *itr - a ;
                    if(diff1 == diff2){
                        count+=2 ;
                    }
                } 
                else if(*itr>101 && *itr<107){
                    diff1 = i-*itr ;
                    diff2 = *itr-e ;
                    if(diff1 == diff2){
                        count+=2 ;
                    }                   
                }
                else if(*itr>107 && *itr<111){
                    diff1 = o-*itr ;
                    diff2 = *itr-i ;
                    if(diff1 == diff2){
                        count+=2 ;
                    }
                }
                else if(*itr>111 && *itr<117){
                    diff1 = u-*itr ;
                    diff2 = *itr-o ;
                    if(diff1 == diff2){
                        count+=2 ;
                    }
                }
            }
        }
        count = count%mod ;
        if(counter_vowel == s1.size()){
            cout<<count+1<<endl;
        }
        else{
            cout<<count<<endl;
        }
    }
    return 0;
}