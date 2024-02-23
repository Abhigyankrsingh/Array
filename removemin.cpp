#include<iostream>

using namespace std;




int largest (int arr[], int n){

    int ans = INT16_MAX;

    for(int i =0; i <n;i++){
        if (arr[i] < ans){
            ans = arr[i];
        }

    }

    return ans;
}

int main(){

    int n;
    cin >> n;
    
    int arr[n];
    for(int i =0; i<n;i++){
        cin >> arr[i];
    }

   cout << largest(arr,n);


}