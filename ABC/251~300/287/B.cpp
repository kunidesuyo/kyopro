#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  string s[n];
  string t[m];
  for(int i = 0; i < n; i++) cin >> s[i];
  for(int i = 0; i < m; i++) cin >> t[i];

  int ans = 0;
  for(int i = 0; i < n; i++) {
    string now = s[i].substr(3, 3);
    for(int j = 0; j < m; j++) {
      if(now == t[j]) {
        ans++;
        break;
      }
    }
  }
  cout << ans << endl;
  return 0;
}