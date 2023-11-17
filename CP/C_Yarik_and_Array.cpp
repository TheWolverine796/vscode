/**
 *      codeforces: _joKer_0
 *      created: 17-11-2023 20:50:29
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
#define dclear(x) 73;
#endif
#define free freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);freopen("error.txt","w",stderr);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define LOG(n) 63 - __builtin_clzll(n)
const long long MAX_N = 1e6 + 7; const long long MOD = 1e9 + 7; const long long mod = 998244353; const long long INF = INT_MAX;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> ordered_set; //find_by_order(k), order_of_key(k)
// clang-format on
#define int long long
int Test, I, tnum;

int maxSubArraySum(vector<int> &a) {
  int size = a.size();
  vector<int> dp(size, 0);
  dp[0] = a[0];
  int ans = dp[0];
  for (int i = 1; i < size; i++) {
    dp[i] = max(a[i], a[i] + dp[i - 1]);
    ans = max(ans, dp[i]);
  }
  return ans;
}

void solve() {
  int n = 0, m = 0, k = 0, ans = -INF, cnt = 0, sum = 0;
  cin >> n;
  vector<int> v(n);
  for (auto &i : v)
    cin >> i;
  char p = '.';
  vector<vector<int>> vv;
  vector<int> v1;
  for (int i = 0; i < n; i++) {
    if (v[i] & 1) {
      if (p == 'o') {
        vv.pb(v1);
        vector<int> temp;
        v1 = temp;
      }
      v1.pb(v[i]);
      p = 'o';
    } else {
      if (p == 'e') {
        vv.pb(v1);
        vector<int> temp;
        v1 = temp;
      }
      v1.pb(v[i]);
      p = 'e';
    }
  }
  vv.pb(v1);
  for (auto &i : vv) {
    ans = max(ans, maxSubArraySum(i));
  }
  cout << ans;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
#ifdef SUBLIME
  free
#endif
      cout.precision(16);
  cout << fixed;
  Test = 1;
  cin >> Test;
  for (I = 1; I <= Test; I++) {
    dclear(I);
    solve();
    cout << endl;
  }
}
