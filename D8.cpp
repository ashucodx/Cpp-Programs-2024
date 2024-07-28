#include <iostream>
using namespace std;

void printFibonacci(int limit);

int main() {
    int limit;
    cout << "Enter the limit for Fibonacci sequence: ";
    cin >> limit;

    printFibonacci(limit);

    return 0;
}

void printFibonacci(int limit) {
    int a = 0, b = 1;
    int nextTerm = a + b;

    cout << "Fibonacci sequence up to " << limit << " is: " << endl;
    cout << a << ", " << b;

    while (nextTerm <= limit) {
        cout << ", " << nextTerm;
        a = b;
        b = nextTerm;
        nextTerm = a + b;
    }
    cout << endl;
}
