#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, Q;
    cin >> N;
    vector<int> n1;
    vector<int> q1;
    for (int i = 0; i < N; i++) {
        int temp;
        cin >> temp;
        n1.push_back(temp);
    }
    cin >> Q;
    for (int j = 0; j < Q; j++) {
        int temp;
        cin >> temp;
        q1.push_back(temp);
    }
    for (int i = 0; i < q1.size(); i++) {
        int temp;
        temp = q1[i];
        cout << n1[temp - 1] << " ";
    }
    return 0;




}




