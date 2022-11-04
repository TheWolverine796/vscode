/**
 *      codeforces: _joKer_0
 *      codechef:  joker_0000
 *      created: 04-11-2022 03:58:01
 **/
// clang-format off
#ifdef ONLINE_JUDGE
#pragma GCC optimize("Ofast", "unroll-loops")
#pragma GCC target("avx,avx2,fma")
#endif
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std; using namespace __gnu_pbds;
#define endl "\n"
#ifdef DEBUG
#include "algo/debug.h"
#else
#define debug(...) 73;
#define print(x) 73;
#define dclear(x) 73;
#endif
#define free freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);freopen("error.txt","w",stderr);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define LOG(n) 63 - __builtin_clzll(n)
const long long MAX_N = 1e6 + 7; const long long MOD = 1e9 + 7; const long long mod = 998244353; const long long INF = LLONG_MAX-INT_MAX;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;
typedef tree<pair<int, int>, null_type, less<pair<int, int> >, rb_tree_tag, tree_order_statistics_node_update> ordered_map;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;
// clang-format on
#define int long long
int Test, I, tnum;

void solve() {
  int n = 0, m = 0, k = 0, ans = 0, cnt = 0, sum = 0;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i], sum += v[i];
  set<int> st, st1;
  for (int i = 1; i * i <= sum; i++) {
    if (sum % i == 0) {
      st.insert(i);
      st.insert(sum / i);
    }
  }
  vector<pair<int, int>> vp;
  map<int, int> mp;
  mp[v[0]] = 0;
  for (int i = 1; i < n; i++) {
    v[i] += v[i - 1];
    mp[v[i]] = i;
  }
  debug(st, mp);
  for (auto i : st) {
    k = 0;
    for (int j = i; j <= sum; j += i) {
      if (!mp.count(j)) {
        k++;
        break;
      }
    }
    if (!k) {
      vector<int> temp;
      for (int j = i; j <= sum; j += i) {
        temp.pb(mp[j]);
      }
      debug(temp, i);
      ans += temp[0];
      for (int k = 1; k < temp.size(); k++) {
        ans += temp[k] - temp[k - 1] - 1;
      }
      cout << ans;
      return;
    }
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
#ifdef SUBLIME
  free
#endif
      Test = 1;
  cin >> Test;
  for (I = 1; I <= Test; I++) {
    dclear(I);
    solve();
    cout << endl;
  }
}
