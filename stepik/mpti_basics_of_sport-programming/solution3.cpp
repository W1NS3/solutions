#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a;
    cin >> a;
    vector<int> b;
    vector<int> c;
    for (int i = 0; i < a; i++) {
        int temp;
        cin >> temp;
        b.push_back(temp);
    }
    for (int i = 0; i < a; i++) {
        if (b[i] % 2 == 0) {
            c.push_back(b[i]);
        }
    }
    for (int i = 0; i < a; i++) {
        if (b[i] % 2 != 0) {
            c.push_back(b[i]);
        }
    }
    for (int i = 0; i < a; i++) {
        cout << c[i] << " ";
    }
    return 0;


}




