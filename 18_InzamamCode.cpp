#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,ct1=0,ct0=0,loc=0;
        cin >> n;
        int s[n];
       for (int i = 0; i < n; i++)
        cin>>s[i];
        for (int i = 0; i < n; i++)
        {
            if (s[i]==0)
            {
              loc=i;
              break;
            } 
            else
            loc=i;  
        }
        if ((loc+1) == n)
        {
            cout<<"0"<<endl;
        }
        else
        {
           for (int i = loc; i < n; i++)
           {
             if (s[i]==1)            
             ct1++;
             else
             ct0++;
           }
          cout<<(1100*ct0)+(100*ct1)<<endl;
        }
        
    }
    return 0;
}