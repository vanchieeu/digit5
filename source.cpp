#include <iostream>
using namespace std;

typedef long long ll;

int countNumber(ll x) {
    int count = 0;

    while (x > 0) {
        int n = x%10;
        x /= 10;
        if (n == 5)
            count++;
    }

    return count;
}

int main() {
    ll n, m;
    cin >> n >> m;

    int count = 0;

    for (int i = n; i <= m; i++)
        count += countNumber(i);

    cout << count;

    return 0;
}