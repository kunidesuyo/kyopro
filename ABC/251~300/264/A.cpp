#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int l, r;
  cin >> l >> r;
  string s = "atcoder";
  for(int i = l-1; i < r; i++) {
    cout << s[i];
  }
  cout << "\n";
  return 0;
}