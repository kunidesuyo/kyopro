#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int ans = 1;
  for(int i = 0; i < b; i++) {
    ans *= a;
  }
  cout << ans << endl;
  return 0;
}