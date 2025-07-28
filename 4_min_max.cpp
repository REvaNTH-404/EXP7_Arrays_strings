#include <iostream>
using namespace std;

int main() {
    int arr[] = {9, 4, 7, 1, 5};
    int min = arr[0], max = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    cout << "Minimum: " << min << "\n";
    cout << "Maximum: " << max << "\n";
    return 0;
}