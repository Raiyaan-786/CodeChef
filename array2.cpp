#include<iostream>
using namespace std;

int main(){
    int n ,arr[1000] ,rev[1000] ,i;
    cin>>n;
    for (int i = 0 ; i<n ; i++){
        cin>>arr[i];  
    }
    for (int i = 0 ; i<n ; i++){
        rev[i] = arr[n-i-1];
        
    }
    for (int i = 0 ; i<n ; i++){
        cout<<rev[i]<<" ";
    }
    
    return 0;
}