#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int n = input.length();

    for (int i = 0; i < n / 2; i++) {
        swap(input[i], input[n - i - 1]);
    }

    cout << "Reversed string: " << input << endl;

    return 0;
}
