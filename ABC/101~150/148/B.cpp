#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;

    for(int i = 0; i < n; i++) {
        cout << s[i] << t[i];
    }
    cout << "\n";

    return 0;
}