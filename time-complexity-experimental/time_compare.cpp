#include <iostream>
#include <ctime>
#include<vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a;

    for(int i = 0; i < n; i++) {
        a.push_back(n - i);
    }

    auto start_time = clock();
    sort(a.begin(), a.end());
    auto end_time = clock();

    cout << end_time - start_time << endl;
}