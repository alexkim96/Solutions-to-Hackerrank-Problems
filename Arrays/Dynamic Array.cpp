#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    int Q;
    int type, x, y;
    int seqCase;
    cin >> N >> Q;
    vector<int> seq[N];
    int lastAnswer = 0;
    for (int i = 0; i < Q; i++) {
        cin >> type >> x >> y;
        seqCase = (x ^ lastAnswer) % N;
        if (type == 1) {
            seq[seqCase].push_back(y);
        }
        else if (type == 2) {
            lastAnswer = seq[seqCase][y%((int)seq[seqCase].size())];
            cout << lastAnswer << endl;
        }
    }
    return 0;
} 
