#include<bits/stdc++.h>

using namespace std;


void printArr(int arr[], int n){

  for(int i =0; i <n; i++){
    cout << arr[i];
  }
}


void swapAlt(int arr[], int size){

  for(int i =0; i < size; i+=2){

    if(i+1 < size){
      swap(arr[i+1], arr[i]);
    } else {
      cout <<" -1" << endl;
    }
  }
}





int main(){


  int n;

  cin >> n;

  int arr[n];


  for(int i =0; i<n; i++){

    cin >> arr[i];
  }

  swapAlt(arr, n);

 printArr(arr, n);
   
}