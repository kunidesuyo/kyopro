#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

ll mod = 1000000000 + 7;

ll modpow(ll a, ll n) {
    ll res = 1;
    while(n > 0) {
        if(n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;        
    }
    return res;
}

ll modinv(ll a) {
    return modpow(a, mod - 2);
}

ll nCr_mod(ll n, ll r) {
    if(n < r) return 0;
    if(n < 0 || r < 0) return 0;
    // nCr = n! / r!(n-r)!
    // n!/(n-r)! 
    ll val = 1;
    for(ll i = 0; i < r; i++) {
        val *= n - i;
        val %= mod;
    }
    // r!
    ll bunsi = 1;
    for(ll i = 1; i <= r; i++) {
        bunsi *= i;
        bunsi %= mod;
    }
    //  /r! % mod
    val *= modinv(bunsi);
    val %= mod;
    return val;
}