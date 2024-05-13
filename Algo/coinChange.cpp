#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int coin[n+5];
    for(int i=1; i<=n; ++i)
    {
        cin >> coin[i];
    }
    int coins[n+5][m+5];
    char ch[n+5][m+5];
    for(int i=0; i<n+1; ++i)
    {
        for(int j=0; j<m+1; ++j)
        {
            ch[i][j]= '.';
        }
    }
    for(int i=0; i<n+1; ++i)
    {
        for(int j=0; j<m+1; ++j)
        {
            if(i==0 && j==0 || j==0)
            {
                coins[i][j] = 0;
            }
            else if(i==0)
            {
                coins[i][j]=INT_MAX;
            }
            else if(j>=coin[i])
            {
                coins[i][j]=min(coins[i-1][j],1+coins[i][j-coin[i]]);
                ch[i][j] = 'l';
            }
            else
            {
                coins[i][j] = coins[i-1][j];
                ch[i][j] = 'u';
            }
        }
    }
  /*  for(int i=0; i<n+1; ++i)
    {
        for(int j=0; j<m+1; ++j)
        {
            cout << coins[i][j] <<" ";
        }
        cout << endl;
    }
    for(int i=0; i<n+1; ++i)
    {
        for(int j=0; j<m+1; ++j)
        {
            cout << ch[i][j] <<" ";
        }
        cout << endl;
    } */
    cout << "Minimum no. of Coin's are " << coins[n][m] << endl;
}
/*

*/

