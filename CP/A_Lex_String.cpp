/**
*      codeforces: _joKer_0
*      codechef:  joker_0000
*      created: 10-06-2022 22:15:56
**/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
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
const long long MAX_N = 1e6 + 7; const long long MOD = 1e9 + 7; const long long mod = 998244353;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;
typedef tree<pair<int, int>, null_type, less<pair<int, int> >, rb_tree_tag, tree_order_statistics_node_update> ordered_map;
#define int long long

void solve()
{
    int n = 0, m = 0, k = 0, ans = 0, cnt = 0, sum = 0;
    cin >> n >> m >> k;
    map<char, int> mp1, mp2;
    string str1, str2, astr;
    cin >> str1 >> str2;
    sort(all(str1));
    sort(all(str2));
    int p = 0, q = 0, r = k, s = k;
    while(n || m)
    {
        while(str1[p] < str2[q])
        {
            if(r)
            {
                astr += str1[p];
                r--;
                s = k;
                p++;
                n--;
                if(!n)
                {
                    cout << astr;
                    return;
                }
            } else
            {
                astr += str2[q];
                q++;
                r = k;
                s--;
                m--;
                if(!m)
                {
                    cout << astr;
                    return;
                }
            }
        }
        while(str1[p] > str2[q])
        {
            if(s)
            {
                astr += str2[q];
                s--;
                r = k;
                q++;
                m--;
                if(!m)
                {
                    cout << astr;
                    return;
                }
            } else
            {
                astr += str1[p];
                s = k;
                p++;
                r--;
                n--;
                if(!n)
                {
                    cout << astr;
                    return;
                }
            }
        }
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

