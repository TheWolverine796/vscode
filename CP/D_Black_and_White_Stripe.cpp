/**
*      codeforces: _joKer_0
*      codechef:  joker_0000
*      created: 07-06-2022 22:00:32
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
const long long INF = 1ll << 32; const long long MAX_N = 1e6 + 7;
const long long MOD = 1e9 + 7; const long long mod = 998244353;
#define int long long

void solve()
{
    int n = 0, m = 0, k = 0, ans = LONG_LONG_MAX, cnt = 0, sum = 0;
    cin >> n >> k;
    string str;
    cin >> str;
    for(int i = 0; i < k; i++)
    {
        if(str[i] == 'W')
            cnt++;
    }
    ans = cnt;
    for(int i = 1; i <= n - k; i++)
    {
        if(str[i - 1] == 'W')
            cnt--;
        if(str[k + i - 1] == 'W')
            cnt++;
        ans = min(ans, cnt);
    }
    cout << max(ans, 0LL);
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

