#include <iostream>
using namespace std;

int maximumScore(int a, int b, int c) {
    int score = 0;
    
    while(a + b != 0 && a + c != 0 && b + c != 0) {
        int arr[3] = {a, b, c};
        int n = sizeof(arr)/sizeof(arr[0]);
 
        std::sort(arr, arr + n);
        int greatest = arr[2];
        int second_greatest = arr[1];

        if(greatest == a) {
            a--;
        } else if(greatest == b) {
            b--;
        } else {
            c--;
        }

        if(second_greatest == a) {
            a--;
        } else if(second_greatest == b) {
            b--;
        } else {
            c--;
        }


        score++;
    }

    return score;
}

int main() {
    cout << maximumScore(2, 4, 6);
}