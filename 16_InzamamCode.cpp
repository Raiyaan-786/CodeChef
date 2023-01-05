#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {  
             cin>>arr[i];
        }
        int f1[11];
        for (int i = 0; i<11; i++)
        {
           f1[i]=0;
        }
        int f2[n+1];
        for (int i = 1; i<=n; i++)
        {
          f2[i]=0;
        }
        for (int i = 0; i <n; i++)
        {
         f1[arr[i]]++;  
          
        }
        for (int i = 0; i<11; i++)
        {
            f2[f1[i]]++; 
        }
        int min=INT_MAX;
        for (int i = 1;i<=n+1; i++)
        {
            if (f2[i]!=0)
            {
                if (min>f2[i])
            {
                min=f2[i];
            }
            }
            
        }
        
    cout<<min<<endl;  
        
    }

//     return 0;
}