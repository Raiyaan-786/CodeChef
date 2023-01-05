#include<iostream>
using namespace std; 

int solution(){
    int N , k , count = 0 ;
    cin>>N>>k;
    if(N<5 || N==k){
        count = 0;
    }
    else{
        if((N-k)>5){
        count = (N-k)/5 ; 
        }
        else{
            count = (N-k)/5 + 1 ;
        }

    }
    return count;
}

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n , k ;
        cin>>n>>k;
        //cout<<solution()<<endl;
        cout<<(n-1)/5 - (k-1)/5<<endl;
    }
    return 0;
}