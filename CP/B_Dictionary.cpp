/**
*      codeforces: _joKer_0
*      codechef:  joker_0000
*      created: 02-05-2022 20:13:48
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

map<string, int> mp;
void pref()
{
    int t = 0;
    for(int i = 'a'; i <= 'z'; i++)
    {
        string str;
        str += (char)i;
        for(int j = 'a'; j <= 'z'; j++)
        {
            if(i != j)
            {
                t++;
                mp[str + (char)j] = t;
            }
        }
    }
    debug(mp)
}

void solve()
{
    string str;
    cin >> str;
    cout << mp[str];
}

signed main()
{
    ios::sync_with_stdio(false); cin.tie(0);
#ifdef SUBLIME
    free
#endif
        int Test = 1;
    pref();
    cin >> Test;
    for(int I = 1; I <= Test; I++)
    {
        dclear(I);
        solve();
        cout << endl;
    }
}

