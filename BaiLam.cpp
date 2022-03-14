#include "bits/stdc++.h"
using namespace std;
#ifdef DEBUG
#include "debug.hpp"
#define ios_base freopen("input.txt", "r", stdin);ios_base
#define o(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); };
#endif
#define endl '\n'
#define int int64_t // if possible let it be
// #define ll int64_t
constexpr int inf = numeric_limits<int>::max() >> 1;
constexpr int N = 1002;
constexpr int mod = 1000000007;

int f[N][N][4];

void upd(int &dp_val, int delta) {
  if (dp_val > 0) dp_val += delta;
}

int cs(int u, int v) {
  u /= 2;
  return max(0LL, ((int) min(u, v) - 1LL));
}

void solution() {
  int r, c;
  cin >> r >> c;
  for (int i = 1; i <= r; i ++) {
    for (int j = 0; j < c; j ++) {
      int u;
      cin >> u;
      for (int k = 0; k < 4; k ++)
        f[i][j + 1][k] = u;
    }
  }
  for (int k = 0; k < 4; k ++) {
    for (int i = 0; i <= r + 1; i ++) f[i][0][k] = f[i][c + 1][k] = 0;
    for (int i = 0; i <= c + 1; i ++) f[0][i][k] = f[r + 1][i][k] = 0;
  }
  for (int i = 1; i <= r; i ++)
    for (int j = 1; j <= c; j ++) {
      upd(f[i][j][0], f[i][j - 1][0]);
      upd(f[i][j][1], f[i - 1][j][1]);
    }
  
  for (int i = r; i >= 1; i --)
    for (int j = c; j >= 1; j --) {
      upd(f[i][j][2], f[i][j + 1][2]);
      upd(f[i][j][3], f[i + 1][j][3]);
    }
  int ans = 0;

  for (int i = 1; i <= r; i ++)
    for (int j = 1; j <= c; j ++) {
      if (f[i][j][0] == 0) continue;
      for (int k = 0; k < 4; k ++) {
        int nx = k + 1;
        if (nx == 4) nx = 0;
        ans += cs(f[i][j][k], f[i][j][nx]);
        ans += cs(f[i][j][nx], f[i][j][k]);
      }
    }
  cout << ans;
}
 
signed main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int tc = 1; 
  cin >> tc;
  for (int i = 1; i <= tc; i ++) {
    cout << "Case #" << i << ": ";
    solution();
    cout << endl;
  }
}