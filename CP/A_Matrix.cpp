/**
*      codeforces: _joKer_0
*      codechef:  joker_0000
*      created: 20-02-2022 01:12:33
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
    cin >> n;
    vector<int> pref;
    map<int, int> seg;
    string str;
    cin >> str;
    for(int i = 0; i < str.length(); i++)
    {
        pref.pb((int)str[i] - '0');
    }
    for(int i = 0; i < pref.size(); i++)
    {
        sum = 0;
        for(int j = i; j < pref.size(); j++)
        {
            sum += pref[j];
            seg[sum]++;
        }
    }
    debug(seg.size(), seg);
    if(!n) ans = seg[0] * (str.size() * (str.size() + 1) - seg[0]);
    for(int i = 1;i * i <= n;i++)
    {
        if(n % i == 0)
        {
            ans += seg[i] * seg[n / i] * (i * i == n ? 1 : 2);
        }
    }
    cout << ans;
}

signed main()
{
    ios::sync_with_stdio(false); cin.tie(0);
#ifdef SUBLIME
    free
#endif
        int Test = 1;
    // cin >> Test;
    for(int I = 1; I <= Test; I++)
    {
        dclear(I);
        solve();
        cout << endl;
    }
}

