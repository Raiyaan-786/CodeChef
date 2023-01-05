#include<iostream>
#include<vector>
using namespace std;

int main(){
   
    int n;  // Number of array to be made  | n = 2
    int q;  // Number of queries   | q = 2 
    cin >> n >> q;
    vector<int> a[n];   // here n is converted to an variable array  a[0] and a[1] as n = 2 
    for(int i = 0; i < n; i++){
        int m;     
        cin >> m;   // values in a[0]
        int o;     
        for(int j = 0; j < m; j++){
            cin >> o;     // values in a[1]
            a[i].push_back(o);
        }
    }
    
    int r, s;
    for(int k = 1; k <= q; k++){
        cin >> r >> s;
        cout << a[r][s] << endl;
    }
    return 0;
}