#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int obj;
    double pbw;
};

bool cmp(Node a,Node b)
{
    if(a.pbw > b.pbw)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n,w;
    cin >> n >> w;

    double profit[n],weight[w];

    for(int i=0; i<n; i++)
    {
        cin >> profit[i];
    }

    for(int i=0; i<n; i++)
    {
        cin >> weight[i];
    }

    Node PBW[n];

    for(int i=0; i<n; ++i)
    {
        PBW[i].obj = i;
        PBW[i].pbw = profit[i]/weight[i];
    }
    sort(PBW,PBW+n,cmp);


    double x[n];

    memset(x,0,sizeof(x));

    int rw = w;

    for(int i=0; i<n; ++i)
    {
        if(rw>0)
        {
            if(rw >= weight[PBW[i].obj])
            {
                x[PBW[i].obj] = 1;
                rw = rw - weight[PBW[i].obj];
            }
            else
            {
                x[PBW[i].obj] = rw/weight[PBW[i].obj];
                rw = 0;
            }
        }
    }
    double ans = 0;
    for(int i=0; i<n; ++i)
    {
        ans = ans + (x[i]*profit[i]);
    }
    cout << ans << endl;
}

