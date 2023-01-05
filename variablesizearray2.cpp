#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the numbers you want in reverse order"<<endl;
    cin>>n;
    int a[n];
    int i;
    cout<<"Enter all the elements: "<<n<<endl;
    for(i = 0 ; i<n ; i++){
        cin>>a[i];
    }
    cout<<"Elements in reverse order :"<<endl;
    for(i = n-1 ; i>=0 ; i-- ){
        cout<<a[i];
    }



    return 0;
}