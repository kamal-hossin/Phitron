#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        string S;
        cin >> N >> S;
        vector<int> lit(N, 0);
        for (int i = 0; i < N; i++) {
            if (S[i] == '1') {
                lit[i] = 1;
                if (i > 0) lit[i - 1] = 1;
                if (i + 1 < N) lit[i + 1] = 1;
            }
        }
        bool possible = true;
        for (int i = 0; i < N; i++) {
            if (lit[i] == 0) {
                possible = false;
                break;
            }
        }
        if (possible) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
