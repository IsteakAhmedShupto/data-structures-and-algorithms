#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

map<ll, bool> visited;

map<ll, vector<ll>> adj_list;

vector<ll> component;

void dfs(ll node)
{
    component.push_back(node);
    visited[node] = true;

    for (auto i : adj_list[node])
    {
        if (!visited[i])
        {
            dfs(i);
        }
    }
}

int main()
{
    ll n, m;
    cin >> n >> m;

    for (ll i = 0; i < m; i++)
    {
        ll u, v;
        cin >> u >> v;

        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    vector<vector<ll>> res;

    for (ll i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            vector<ll> component;
            dfs(i);
            res.push_back(component);
        }
    }

    for (auto i : res)
    {
        // printing all connected components in dfs
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}
