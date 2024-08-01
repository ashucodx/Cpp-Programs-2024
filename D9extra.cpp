#include <iostream>
#include <string>
using namespace std;

string reverseString(const string& str);

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string reversed = reverseString(input);
    cout << "Reversed string: " << reversed << endl;

    return 0;
}

string reverseString(const string& str) {
    int n = str.length();
    string reversedStr = str;

    for (int i = 0; i < n / 2; i++) {
        swap(reversedStr[i], reversedStr[n - i - 1]);
    }

    return reversedStr;
}
