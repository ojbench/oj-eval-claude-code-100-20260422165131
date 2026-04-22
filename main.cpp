#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool is_perfect(long long n) {
    if (n <= 1) return false;
    long long sum = 1;
    long long sqrt_n = sqrt(n);
    for (long long i = 2; i <= sqrt_n; ++i) {
        if (n % i == 0) {
            sum += i;
            if (i * i != n) {
                sum += n / i;
            }
        }
    }
    return sum == n;
}

int main() {
    int m;
    if (!(cin >> m)) return 0;
    while (m--) {
        long long n;
        if (cin >> n) {
            if (is_perfect(n)) {
                cout << 1 << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}
