#include<iostream>
using namespace std;

int main(){
    int T , A , B ;
    cin>>T; 
    for(int i = 0 ; i<T ; i++){
        cin>>A>>B ;
        int C = A + B ; 
        if(C % 2 == 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}