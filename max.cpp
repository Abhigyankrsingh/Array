#include <iostream>
#include <climits> // for INT_MAX

using namespace std;

int maxi(int arr[], int n) {
    int ans = INT_MIN; // Initialize ans to INT_MAX
    for (int i = 0; i < n; i++) {
        if (arr[i] > ans) { // Check if arr[i] is less than ans
            ans = arr[i];
        }
    }
    return ans; // Move the return statement here, outside the for loop
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << maxi(arr, n);
    return 0;
}

