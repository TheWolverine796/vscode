/**
*      codeforces: _joKer_0
*      codechef:  joker_0000
*      created: 08-06-2022 20:03:57
**/
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#ifdef DEBUG
#include "algo/debug.h"
#else
#define debug(...) 
#define print(x)
#define dclear(x)
#endif
#define free freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);freopen("error.txt","w",stderr);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define LOG(n) 31 - __builtin_clz(n)
const long long mod = 998244353; const long long MAX_N = 1e6 + 7; const long long MOD = 1e9 + 7;
#define int long long

void solve()
{
    int n = 0, m = 0, k = 0, ans = 0, cnt = 0, sum = 0;
    cin >> n >> m;
    int p = n % 3, q = m % 3;
    if(p == 0 || q == 0)
    {
        cout << 0;
        return;
    }
    if(p == q)
    {
        cout << 1;
        return;
    } else
    {
        cout << 2;
    }
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

