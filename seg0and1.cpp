#include <bits/stdc++.h>
using namespace std;

void seg(vector<int>& arr, int n) {
    int count0 = 0;
    int count1 = 0;

    // Count the number of 0s and 1s
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            count0++;
        } else {
            count1++;
        }
    }

    // Place 0s at the beginning
    for (int i = 0; i < count0; i++) {
        arr[i] = 0;
    }

    // Place 1s after 0s
    for (int i = count0; i < n; i++) {
        arr[i] = 1;
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements of the array (0s and 1s only): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    seg(arr, n);

    cout << "Segregated Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
