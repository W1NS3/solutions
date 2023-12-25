#include <iostream>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int j = 0; j < m; j++) {
        long long temp = 0;
        for (int i = 0; i < n; i++) {
            temp += a[i][j];
        }
        cout << temp << " ";
    }

    return 0;


}



