#include <iostream>
using namespace std;

int divide(int a, int b) {
    if (b == 0) {               (const char [23]) "Division by zero error"
        throw "Division by zero error"; // throw an exception
                                        // use throw for errors
    }
    return a / b;
}

// basic exception handling
int main() {
  try { 
    int result = divide(10, 0); // this will throw an exception
    cout << "Result: " << result << endl;
  }
catch (const char* e) {
    cout << "Exception caught: " << e << endl;
  }
// catch the exception
return 0;

}

// multiple catch block
int main() {
    try {
        throw 5; // throws an int exception
    }
    catch (int e) {
        cout << "Caught an integer: " << e << endl;
    }
    catch (double e) {
        cout << "Caught a double: " << e << endl;
    }
    catch (...) {
        cout << "Caught an unknown exception!" << endl;
    }
    // catches all handler for any other type
    return 0;
}

int main() {
    int x = -1;
    cout << "Before try \n";
    try {
        cout << "Inside try \n";
        if (x < 0) {
            throw x;
            cout << "After throw \n";
        }
    }
    catch (int x) {
        cout << "Exception Caught \n";
    }

    cout << "After catch (Will be executed) \n";
    return 0;
}

int main() {
    try {
        try {
            throw 20;
        }
        catch (int n) {
            cout << "Handle Partially ";
            throw; // rethrows an exception
        }
    }
    catch (int n) {
        cout << "Handle remaining ";
    }
    return 0;
}