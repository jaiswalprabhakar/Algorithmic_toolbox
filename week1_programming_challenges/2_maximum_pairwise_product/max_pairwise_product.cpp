#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
ll MaxPairwiseProduct(vector<ll>& numbers) {
    //ll max_product = 0;
    //ll n = numbers.size();
    sort(numbers.begin(), numbers.end(), greater<ll>());

    return numbers[0]*numbers[1];
}

int main() {
    ll n;
    cin >> n;
    vector<ll> numbers(n);
    for (ll i = 0; i < n; ++i) {
        cin>> numbers[i];
    }
    cout << MaxPairwiseProduct(numbers) <<"\n";
    return 0;
}
