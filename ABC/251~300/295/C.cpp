#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(all(a));

  int ans = 0;
  for(int i = 1; i < n; i++) {
    if(a[i-1] == a[i]) {
      ans++;
      i++;
    }
  }
  cout << ans << endl;
  return 0;
}