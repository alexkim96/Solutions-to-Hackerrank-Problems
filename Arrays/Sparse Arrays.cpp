#include <bits/stdc++.h>

using namespace std;

int main() {
    map<string,int> map;
    int n, k;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        map[s]++;
    }
    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> s;
        cout << map[s] << endl;
    }
    return 0;
}
