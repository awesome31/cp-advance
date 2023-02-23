#include <iostream>
#include <vector>
#include <set>

using namespace std;

int distributeCandies(vector<int>& candyType) {
    int candiesAllowed = candyType.size() / 2;

    set<int> s(candyType.begin(), candyType.end());

    if(candiesAllowed >= s.size()) {
        return s.size();
    } else {
        return candiesAllowed;
    }
}

int main() {
    int arr[] = { 0,1,1,1,2,3,6,7,8,9 };
    int n = sizeof(arr) / sizeof(arr[0]);
  
    vector<int> vect(arr, arr + n);

    int result = distributeCandies(vect);

    cout << result;
}