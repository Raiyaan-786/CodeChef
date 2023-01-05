#include<iostream>
using namespace std;

int main(){
    int t; 
	cin>>t ; 
	while(t--){
	    int x,y,s;
	    cin>>x>>y;
        if(x>y){
            s = (x-y)/10;
	        cout<<s+1<<endl;
        }
        else{
            s = (y-x)/10;
            cout<<s<<endl;
            }
	}
    return 0;
}