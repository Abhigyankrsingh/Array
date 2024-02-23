#include <iostream>
using namespace std;


void printo(int arr[], int n){

    for(int i =0; i<n;i++){
        cout << arr[i]<<" ";

    }
}


void rev(int arr[], int n){
    int start = 0;
    int end = n-1;

    while(start < end){
     
            swap(arr[start], arr[end]);
            start++;
            end--;
        
    }
}




int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin >> arr[i];
    }

    rev(arr, n);
    printo(arr, n);
}
