#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int n;
    cin >> n;
    
    int count = 0;

    for (int i = 1; i <= n; i++) {
        int temp = i;
        int primeDivisors = 0;

        for (int j = 2; j <= temp; j++) {
            if (temp % j == 0) {
                bool isPrime = true;
                for (int k = 2; k * k <= j; k++) {
                    if (j % k == 0) {
                        isPrime = false;
                        break;
                    }
                }
                if (isPrime) {
                    primeDivisors++;
                    while (temp % j == 0) {
                        temp /= j;
                    }
                }
            }
        }

        if (primeDivisors == 2) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}


