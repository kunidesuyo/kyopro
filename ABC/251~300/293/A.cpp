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
  int n = s.length();
  for(int i = 1; i <= n/2; i++) {
    swap(s[2*i-2], s[2*i-1]);
  }
  cout << s << endl;
  return 0;
}