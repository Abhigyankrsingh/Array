#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            cout << "Key is found at index " << mid << endl;
            return mid;
        }

        if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    cout << "Key not found" << endl;
    return -1;
}

int main() {
    int n;
    cin >> n;

    int k;
    cin >> k;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Index is at " << binarySearch(arr, n, k) << endl;

    return 0;
}
