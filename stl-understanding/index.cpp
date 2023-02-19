#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <set>
#include <map>
#include <unordered_map>
#include <forward_list>
#include <queue>
using namespace std;

void printVector(vector<int>);

int main() {
    //Vectors are dynamic arrays. Size can be increased and decreased.
    vector<int> v;
    for(int i = 0; i < 10; i++) {
        v.push_back(i + 1);
    }
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
    printVector(v);
    sort(v.begin(), v.end(), greater<int>());
    printVector(v);
    
    //Strings are vector of characters;
    string str = "Rohit";
    str.append("Tyagi");
    cout << str << endl;
    cout << str.substr(1, 3) << endl; 
    cout << str.compare("RohitTyagi") << endl;

    //Pairs are tuples of size 2.
    pair<int, char> p(1, 'a');

    cout << p.first << endl;
    cout << p.second << endl;

    pair<int, char> p2 = make_pair(2, 'c'); //This is another way to create a pair.

    //Sets.
    set<int> s;

    int arr[] = {2, 4, 5, 1, 2, 3, 4, 5, 6, 7};

    for(int i = 0; i < 10; i++) {
        s.insert(arr[i]);
    }

    set<int> :: iterator set_it;

    for(set_it = s.begin(); set_it != s.end(); set_it++) {
        cout << *set_it << endl;
    }

    for(auto i: s) cout << i << " " ; //This is a better iterator. Easy to implement.

    if(s.find(4) != s.end()) { //This is how we find in any vector or whatever.
        cout << "Found the elements";
    }

    //Maps are a key value pair.
    map<int, int> m;
    vector<int> numbers = {1, 2, 3, 1, 2, 4, 1, 2, 3, 1};

    for(int i = 0; i < numbers.size(); i++) {
        m[arr[i]]++;
    } //We can use maps easily.

    //Queue
    queue<int> q;

    for(int i = 0; i < 10; i++) {
        q.push(i);
    }

    //Unordered map
    unordered_map<int, int> u;

    //Linked List (Singly)
    forward_list<int> fl;
}

void printVector(vector<int> v) {
    vector<int> :: iterator it; //Iterators are always pointers to elements. Deference it.

    for(it = v.begin(); it != v.end(); it++) {
        cout << *it << endl;
    }
}