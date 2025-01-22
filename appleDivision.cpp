#include <bits/stdc++.h>
using namespace std;

long long min_diff(int index, long long a, long long b, vector<long long> *v) {
    if (index == v->size()) {
        return abs(a - b);
    }

    return min(
        min_diff(index + 1, a + v->at(index), b, v),
        min_diff(index + 1, a, b + v->at(index), v)
    );
}

int main () {
    int n;
    cin >> n;

    vector<long long> v(n);
    for (int i=0; i<n; i++) {
        cin >> v.at(i);
    }

    cout << min_diff(0, 0, 0, &v) << endl;
}