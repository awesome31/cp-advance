#include <iostream>
#include <array>
#include <vector>
using namespace std;

//Arrays are passed by reference. Array name acrually references the pointer.
//All other data structures are actually copied and not referenced.
void updateArray(int arr[], int i, int val) {
    arr[i] = val;
}

//We have to pass the size of the array alwats.
void print(int arr[], int n) {
     for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
}

void understandArrays() {
    int arr[5] = {1, 2, 3, 4, 5}; //Classical Array in cpp.
    int n = sizeof(arr) / sizeof(int);

    updateArray(arr, 1, 13);
    print(arr, n);

    //Just know that we can sort classical arrays as well.
}

//All STL containers are passed by value. What that means is that the value is copied in the heap.
//This is how we can pass by reference.
void updateStlArray(array<int, 6>* arr, int i, int val) {
    (*arr)[i] = val;
}

void understandStlArrays() {
    array<int, 6> arr = {1, 2, 3, 4, 5, 6};

    updateStlArray(&arr, 1, 100);

    arr[0] = 10;

    array<int, 6> :: iterator it;

    for(int x : arr) {
        cout << x << endl;
    }

    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << endl;
    }

    for(it = arr.begin(); it != arr.end(); it++) {
        cout << *it << endl;
    }
}

void understandVectors() {
    vector<int> v;

    //If we do not give any size to a vector, then eaech time we reach the end of the capacity 
    //of a vector, it actually doubles the size of itself.
    //This is the reason that sometimes array.push_back can be a little expensive.
    //To avoid this problem the best thing to do is use .reserve function.

    v.reserve(100);
    v.capacity(); //This will be 100.;
    v.size(); //This will keep changing.
}

int main() {
    understandVectors();
}