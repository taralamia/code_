#include <bits/stdc++.h>
using namespace std;

void fast_io_initialization() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main() {
    fast_io_initialization();

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;

        vector<pair<char, int>> blocks_serials;
        int i = 0;
        while (i < N) {
            int j = i;
            while (j < N && S[j] == S[i]) j++;
            blocks_serials.push_back({S[i], j - i});
            i = j;
        }

        bool already_magical = true;
        for (auto &p : blocks_serials) {
            if (p.second % 2 != 0) {
                already_magical = false;
                break;
            }
        }

        if (already_magical) {
            cout << 0 << "\n\n";
            continue;
        }

        vector<int> flip_indices;
        int pos = 0;
        for (auto &p : blocks_serials) {
            char ch = p.first;
            int len = p.second;
            if (len % 2 != 0) {
                flip_indices.push_back(pos + 1);
            }
            pos += len;
        }

        cout << flip_indices.size() << "\n";
        for (int idx : flip_indices) cout << idx << " ";
        cout << "\n";
    }

    return 0;
}
