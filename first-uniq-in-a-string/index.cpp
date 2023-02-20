#include <iostream>
#include <unordered_map>

using namespace std;

int firstUniqChar(string s) {
    unordered_map<char, int> um;

    for (char i: s) {
        um[i]++;
    }

    for(int i = 0; i < s.size(); i++) {
        auto it = um.find(s.at(i));

        if(it -> second == 1) {
            return i;

            break;
        }
    }

    return -1;
}

int main() {
   cout << firstUniqChar("aabb");
}




