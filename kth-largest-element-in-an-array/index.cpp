#include <iostream>
#include <queue>
#include <vector>

using namespace std;

//Problem: https://leetcode.com/problems/kth-largest-element-in-an-array/

int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int> pq;

    for(int i: nums) {
        pq.push(i);
    }

    for(int i = 0; i < k - 1; i++) {
        pq.pop();
    }

    return pq.top();
}

int main() {
    int arr[] = { 3,2,3,1,2,4,5,5,6 };
    int n = sizeof(arr) / sizeof(arr[0]);
  
    vector<int> vect(arr, arr + n);

    cout << findKthLargest(vect, 4);
}