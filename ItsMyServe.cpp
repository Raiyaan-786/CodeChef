#include<iostream>
using namespace std;

int main(){
    int t ; 
    cin>>t;
    while(t--){
        int p , q;
        cin>>p>>q;
        // for(int i = 0 ; i<(p+q) ;i++){
        //     if(i*4 == (p+q) || (i*4)+1 == (p+q)){
        //         cout<<"Alice"<<endl;
        //     }
        //     else{
        //         cout<<"Bob"<<endl;
        //     }

        // }
        if((p+q+1)%4 == 1 ||(p+q+1)%4 == 2 ){
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
        }

    }
    return 0;
}