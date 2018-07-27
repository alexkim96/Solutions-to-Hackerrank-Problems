#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the arrayManipulation function below.

int main()
{
    int n, m, a, b;
    long k;
    long answer = 0;
    long max = 0;
    cin >> n >> m;
    long *foo = new long[n + 1];
    
    for (int i = 0; i < m; i++) {
        cin >> a >> b >> k;
        foo[a - 1] += k;
        foo[b] -= k;
    }
    
    for (int i = 0; i < n; i++) {
        max += foo[i];
        if (answer < max) {
            answer = max;
        }
    }
    
    cout << answer;
    return 0;
}
