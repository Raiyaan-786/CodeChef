#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int t ; 
    cin>>t ;
    while(t--){
        cout<<"Enter the value"<<endl;
        int n , q , count = 0 ;
        cin>>n>>q ;
        string s ;
        cout<<"Enter the value of string "<<endl;
        cin>>s;
        for(int i = 0 ; i<q ; i++){
            cout<<"Enter the value of l and r "<<endl ;
            int l , r , w;
            cin>>l>>r ; 
            w = r-l+1;
            string str ;
            for(int i = 0 ; i<w ;i++){
                str.push_back(s[l]);
                l++ ;
            }
            for(int i = 0 ; i<str.length() ; i++){
                cout<<str[i]<<" ";
            }
            for(int i = 0 ; i<w/2 ;i++){
                if(str[i] != str[w-1-i]){
                    count++ ;
                }                         
            }
            cout<<endl;
        } 
        
        if(count == 0 ){
            cout<<"YES "<<count<<endl;
        }
        else{
            cout<<"NO "<<count<<endl;
        }

    }
    return 0;
}