#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  string s;
  cin >> s;
  for(int i = 0; i < s.length(); i++) {
    cout << (char)(s[i] - 32);
  }
  cout << "\n";
  return 0;
}