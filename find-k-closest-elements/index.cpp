#include <iostream>
#include <vector>
#include <cstdlib>
#include <stack>
#include <queue>
using namespace std;

//https://leetcode.com/problems/find-k-closest-elements/description/

vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    vector<int> result;

    if(x <= arr[0]) {
        for(int i = 0; i < k; i++) {
            result.push_back(arr[i]);
        }

        return result;
    } else if(x >= arr[arr.size() - 1]) {
        for(int i = arr.size() - 1; i > arr.size() - k - 1; i--) {
            result.push_back(arr[i]);
        }

        reverse(result.begin(), result.end());
        
        return result;
    }

    int l = 0;
    int r = 0;

    for(int i = 0; i < arr.size() - 1; i++) {
        if(arr[i] == x) {
            l = i;
            r = i + 1;

            break;
        } else if(arr[i] < x && arr[i + 1] > x) {
            l = i;
            r = i + 1;

            break;
        }
    }

    priority_queue<int> pq;
    queue<int> right_q;
    stack<int> left_s;

    while(k--) {
        if(r > arr.size() -1 || (l > -1 && abs(arr[l] - x) <= abs(arr[r] - x))) {
            pq.push(arr[l]);

            l--;
        } else if(l < 0 || (r < arr.size() && abs(arr[l] - x) > abs(arr[r] - x))) {
            pq.push(arr[r]);

            r++;
        }
    }

    while(!pq.empty()) {
        result.push_back(pq.top());

        pq.pop();
    }

    reverse(result.begin(), result.end());

    return result;
}

int main() {
    int arr[] = { 0,1,1,1,2,3,6,7,8,9 };
    int n = sizeof(arr) / sizeof(arr[0]);
  
    vector<int> vect(arr, arr + n);

    vector<int> result = findClosestElements(vect, 9, 4);

    for(int i : result) {
        cout << i << " ";
    }
}
