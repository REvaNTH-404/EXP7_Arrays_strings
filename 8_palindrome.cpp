#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string rev = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        rev += str[i];
    }

    if (str == rev)
        cout << str << " is a palindrome.\n";
    else
        cout << str << " is not a palindrome.\n";

    return 0;
}