#include<iostream>
using namespace std;

int main(){
    // int arrp[4];
    // cin>>arrp[0];
    // cin>>arrp[1];
    // cin>>arrp[2];
    // cin>>arrp[3];
    // cout<<arrp[3];
    // cout<<arrp[2];
    // cout<<arrp[1];
    // cout<<arrp[0];
    int n ,arr[100] ,rev[100] ,i;
    cin>>n;
    for (int i = 0 ; i<=n ; i++){
        cin>>arr[i];  
    }
    for (int i = 0 ; i<=n ; i++){
        rev[i] = arr[n-i];
        
    }
    for (int i = 0 ; i<=n ; i++){
        cout<<rev[i]<<" ";
    }
    return 0;
}
    
