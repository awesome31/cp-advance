#include <iostream> //This how I can use cout
using namespace std; //This command helps us import the namepsace inside the program.

enum EyeColor {Brown, Blue, Green, Grey, Other}; //This is how we create an ENUM

float add(float a, float b); //Write the definiton of the function.
void print(string s);
void celebrateBirthday(int* age);

int main() {
    //Part 1.
    int age = 25; //This is how we assing variables. Statically type language.
    const float name = 23.2; //This is how we declare an immutable value.
    double average = 23.2344; //Higher precision decimal.
    char firstLetter = 'a'; //Character. Strings are an array of characters.
    string username = "Rohit Tyagi"; //These are stored in the heap.
    bool isTodaySunny = true; //Boolean
    string colors[] = {"red", "blue", "green", "yellow", "pink"}; //Array size needs to be specified. Stack.
    string randoms[] = {};
    long int a = 12345555; //We have long ints, signed and unsigned integers etc etc.
    
    randoms[1] = "Rohit";

    cout << colors[0] << randoms[1]; //We can use cout in this way.

    // cin >> colors[1]; //This how we take the input. Static arrays access is very very fast.

    // cout << colors[1];

    //Part 2. Conditionals.
    bool isTodayRaing = true;

    if(isTodayRaing) { //If else conditions are like any other.
        cout << "Go To the parrk" << endl;
    } else {
        cout << "Whatever" << endl;
    }

    //Ternary expressions
    isTodayRaing? cout << "whatever" : cout << "Whatever 1";

    bool isTodayWeekend = true;

    if(isTodayWeekend && isTodayRaing) {
        cout << "Go to the parl" << endl;
    } else if(isTodayWeekend) {
        cout << "Go to the park please" << endl;
    }

    //Switch case statements
    EyeColor eyeColor = Brown;

    switch (eyeColor) {
        case Brown: cout << "Your color is brown"; break;
        case Blue: cout << "Your color is blue"; break;
        case Green: cout << "Your color is green"; break;
        case Grey: cout << "Your color is grey"; break;
        case Other: cout << "Your eye color is unknown"; break;
        default: cout << "Not a valid eye colors";
    }

    //Part 3: Loops
    int counter = 1;

    while(counter < 2) {
        cout << "I am infinite now" << endl;

        counter++;
    }

    string animals[] = {"Elephant", "Cat", "Dog", "Cow", "Monkey"};

    for(int i = 0; i < 5; i++) {
        cout << animals[i] << endl;
    }

    //Part 4: Functions
    cout << add(1, 2) << endl;
    print("Hello World");

    //Part 5: Pointers
    int myAge = 25;

    cout << "Before Function" << myAge << endl;
    celebrateBirthday(&myAge);
    cout << "After Function" << myAge << endl;

    int luckyNumbers[] = {1, 2, 3, 4, 5};

    cout << luckyNumbers << endl; //We get the address of the first element of an array.

    int* luckyPointer = luckyNumbers;

    cout << luckyPointer << endl;
    cout << *luckyPointer << endl;

    luckyPointer++;

    cout << *luckyPointer << endl; //This proves continous memory locations are stored.
}

float add(float a, float b) {
    return a + b;
}

void print(string s) {
    cout << s << endl;
}

void celebrateBirthday(int* age) { //This is passed by value.
    (*age)++;

    cout << "Celebrated my " << (*age) << " birthday" << endl;
}