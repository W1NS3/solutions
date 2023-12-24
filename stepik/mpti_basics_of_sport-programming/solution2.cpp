#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    vector<int> p;
    vector<int> q;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        p.push_back(temp);
    }
    for (int j = 0; j < n; j++) {
        int temp;
        cin >> temp;
        q.push_back(temp);
    }
    for (int z = 0; z < n; z++) {
        if (q[z] - p[z] >= 2) {
            count++;
        }
    }
    cout << count;
    return 0;


}



