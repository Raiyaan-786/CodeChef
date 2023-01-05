#include<iostream>
using namespace std;

int main(){
    int p1 , p2 , p3 , p4;
    int i = 0 ; 
    cin>>p1>>p2>>p3>>p4;
    if(p1 >=10){
        i = i + 1;
    }
    else{
       i = i + 0 ;
    } 
    if(p2 >=10){
        i = i + 1;
    }
    else{
       i = i + 0 ;
    } 
    if(p3 >=10){
        i = i + 1;
    }
    else{
       i = i + 0 ;
    } 
    if(p4 >=10){
        i = i + 1;
    }
    else{
       i = i + 0 ;
    }
    cout<<i<<endl;
    return 0;
}