#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int k;
    cin >> n >> k;
    k %= n;
    int foo[n], answer[n];
    for (int i = 0; i < n; i++) {
        cin >> foo[i];
    }
    for (int i = 0; i < n; i++) {
        answer[(n + i - k) % n] = foo[i];  
    }
    for (int i = 0; i < n; i++) {
        cout << answer[i] << " ";
    }
    return 0;
}
