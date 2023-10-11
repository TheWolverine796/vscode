/**
 *      codeforces: _joKer_0
 *      created: 26-09-2023 21:34:47
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

// O(log(n)), representing powers in binary form.
int bin_pow(int a, int p) {
  int res = 1;
  while (p) {
    if (p & 1) {
      (res *= a);
    }
    p >>= 1;
    (a *= a);
  }
  return res;
}

bool check(vector<vector<int>> &vv, int st, int en, int val) {
  int temp = 0;
  for (int i = 0; i < 32; i++) {
    if (vv[en][i] - vv[st - 1][i] == en - st + 1)
      temp = temp | (bin_pow(2, i));
  }
  return temp >= val;
};

int bSearch(vector<vector<int>> &vv, int l, int val, int n) {
  int r = -1, st = l, en = n;
  while (st <= en) {
    int mid = (st + en) / 2;
    if (check(vv, l, mid, val)) {
      r = mid;
      st = mid + 1;
    } else
      en = mid - 1;
  }
  return r;
};

void solve() {
  int n = 0, m = 0, k = 0, cnt = 0, sum = 0;
  cin >> n;
  vector<int> v(n + 1, 0);
  for (int i = 1; i <= n; i++)
    cin >> v[i];
  vector<vector<int>> vv(n + 1, vector<int>(33, 0));
  for (int j = 1; j <= n; j++) {
    int num = v[j];
    for (int i = 0; i < 32; i++) {
      vv[j][i] += vv[j - 1][i];
      if (num & (bin_pow(2, i)))
        vv[j][i]++;
    }
  }
  cin >> k;
  vector<int> ans;
  while (k--) {
    int ind, temp;
    cin >> ind >> temp;
    if (v[ind] < temp) {
      ans.pb(-1);
      continue;
    }
    ans.pb(bSearch(vv, ind, temp, n));
  }
  for (auto &i : ans)
    cout << i << " ";
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
