#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<int> graph[n + 1];

    int u, v;

    for (int i = 1; i <= e; i++)
    {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        cout << "Node :" << i << " ->";

        for (int j = 0; j < graph[i].size(); j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }

    return 0;












    vector<int>graph;
    graph->push_back(1)

}
