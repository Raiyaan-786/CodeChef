#include<iostream>
using namespace std;

int main(){
    int T , X , Y;
    cin>>T ; 
    for(int i = 0 ; i < T ; i++){
        cin>>X>>Y;
        if(Y > X &&Y <= X + 200){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}