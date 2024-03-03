#include<bits/stdc++.h>

using namespace std;



void bub (vector<int> &arr , int n){

    for(int i = n-2; i>=0;i--){
        bool swaped = 0;

        for(int j = 0; j<=i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swaped = 1;
            } if (swaped == 1){
                break;
            }
        }
    }
}




int main(){

    int n;
    cin >> n;

    vector<int>arr(n);

    for(int i =0; i<n;i++){
        cin >> arr[i];
    }

    bub(arr, n);

    for(int i =0; i<n; i++){
        cout << arr[i];
    }
}