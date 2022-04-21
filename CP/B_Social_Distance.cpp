/**
*      codeforces: _joKer_0
*      codechef:  joker_0000
*      created: 19-04-2022 21:29:18
**/
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#ifdef DEBUG
#include "algo/debug.h"
#else
#define debug(...) 
#define dclear(x)
#endif
#define free freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);freopen("error.txt","w",stderr);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define LOG(n) 31 - __builtin_clz(n)
const long long INF = 1ll << 32; const long long MAX_N = 1e6 + 7;
const long long MOD = 1e9 + 7; const long long mod = 998244353;
#define int long long

void solve()
{
    int n = 0, m = 0, k = 0, ans = 0, cnt = 0, sum = 0;
    cin >> n >> m;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    for(int i = 1; i < n; i++)
    {
        sum += max(v[i - 1], v[i]);
    }
    sum += max(v[n - 1], v[0]);
    sum += n;
    if(sum <= m)
    {
        cout << "YES";
        return;
    } cout << "NO";
}

signed main()
{
    ios::sync_with_stdio(false); cin.tie(0);
#ifdef SUBLIME
    free
#endif
        int Test = 1;
    cin >> Test;
    for(int I = 1; I <= Test; I++)
    {
        dclear(I);
        solve();
        cout << endl;
    }
}

