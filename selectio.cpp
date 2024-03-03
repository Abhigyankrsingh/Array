#include<bits/stdc++.h>

using namespace std;


void select(vector<int> &arr, int n){

    for(int i =0; i < n-1; i++){

        int index = i;

        for(int j = i+1; j<n;j++){
            if(arr[j] < arr[index]){
                index = j;
            }
        }

        swap(arr[i], arr[index]);
    }
}




int main(){

    int n;

    cin >> n;

    vector<int>arr(n);

    for(int i =0; i<n;i++){
        cin >> arr[i];
    }

    select(arr, n);

    for(int i =0; i<n;i++){
        cout << arr[i];
    }
}