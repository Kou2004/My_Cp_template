
/******************************************************************************

                             Om Namah Shivay !!!

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pb(e) push_back(e)
#define sv(a) sort(a.begin(), a.end())
#define sa(a, n) sort(a, a + n)
#define mp(a, b) make_pair(a, b)
#define all(x) x.begin(), x.end()
#define fo(i, a, b) for (ll i = a; i < b; i++)
// modulo operation
ll mod_sub(ll a, ll m)
{
    return (a % m + m) % m;
}



// prime check krne ke liye
bool
isPrime (ll n)
{
  if (n <= 1)
    return false;
  for (int i = 2; i <= n / 2; i++)
    if (n % i == 0)
      return false;
  return true;
}

//kadane algo 
// ll S = 0,ll sum = 0;
//     ll cur = 0;
//     fo(i,0,n) {
//         sum += a[i]; //normal sum
//        //1. cur += a[i];
//       //2.  cur = max(cur, 0LL);
//        //3. S = max(S, cur);--> maximum sum
//     }

//prefix sum
void fillPrefixSum(vector<ll>& arr, int n, vector<ll>& prefixSum) {
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];
}
// sieve algo
void SieveOfEratosthenes(ll n)
{
    vector<ll> prime(n + 1, true);
    for (ll p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (ll i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (ll p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}
// modular exponentiation
ll power(ll x, ll y, ll p)
{
    ll res = 1;
    while (y > 0) {
        if (y % 2 == 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}



int
main ()
{
  ios_base::sync_with_stdio (false);
  cin.tie (NULL);
  ll t;
  fo(i,0,t){
      
      //write the code inside the test cases
  }

  return 0;
}
