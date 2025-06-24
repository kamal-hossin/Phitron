#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    
    while (t--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        bool possible = true;

        if (X > Z + 1) {
            possible = false;
        } else {
            if (X == 0) {
                if (Y > 0 && Z == 0) {
                    possible = true;
                } else {
                    possible = true;
                }
            } else {
                if (Y == 0) {
                    if (X > Z + 1) {
                        possible = false;
                    }
                } else {
                    if (X > Z) {
                        possible = false;
                    }
                }
            }
        }

        if (X > 0 && Y > 0 && Z == 0) {
            possible = false;
        }

        if (possible) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}

