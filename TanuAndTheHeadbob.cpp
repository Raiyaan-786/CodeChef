#include<iostream>
using namespace std;

int main(){
    int t , count = 0; 
	cin>>t ;
	while(t--){
	    int n ; 
	    cin>>n ;
	    string str ; 
	    cin>>str;
        for(int i = 0 ; i<n ; i++){
            if(str[i] == 'I'){
                count = 1 ;
                break ;
            }
            else if (str[i] == 'Y'){
                count = 2 ;
                break; 
            }
            else{
                count = 3 ;
            }
            
        }    
	    if(count == 3 ){
            cout<<"NOT SURE"<<endl;
        }
        else if(count == 1 ){
            cout<<"INDIAN"<<endl;
        }
        else{
            cout<<"NOT INDIAN"<<endl;
        }       
	}
    return 0;
}