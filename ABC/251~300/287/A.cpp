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
  string s[n];
  for(int i = 0; i < n; i++) cin >> s[i];
  int For = 0;
  int Against = 0;
  for(int i = 0; i < n; i++) {
    if(s[i] == "For") {
      For++;
    }else {
      Against++;
    }
  }
  if(For > Against) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}