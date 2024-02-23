#include<iostream>
using namespace std;


int sear(int arr[], int k, int n ){

    for(int i =0; i<n;i++){
        if(arr[i] == k ){
            return i;
        }
    }
    return -1;
}


int main(){

    int n;
    cin >>n;

    int k;
    cin >> k;
     
     int arr[n];
    for(int i =0; i<n;i++){
        cin >> arr[i];
    }
  
  cout << sear(arr, k,n);
}