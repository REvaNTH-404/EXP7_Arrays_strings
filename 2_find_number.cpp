#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 8, 12, 3, 7};
    int num, found = 0;
    cout << "Enter number to search: ";
    cin >> num;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == num) {
            found = 1;
            break;
        }
    }

    if (found)
        cout << num << " is found in the array.";
    else
        cout << num << " is not found in the array.";
    return 0;
}