#include<bits/stdc++.h>

using namespace std;


int binarySearch(int arr [], int size, int key){

 int start = 0;

 int end =  size -1;

 int mid = start + (end - start/2);


 if ( start <=  end){

    if( arr[mid] == key){
        cout << "Key is found" << arr[mid] << endl;
    
    }


    if(key > arr[mid]){
        start = mid + 1;
    }

     else {
        end = mid - 1;
     }

     mid = start + (end - start/2);


 }

  return -1;


}

int main(){

  int n;

  cin >> n;


  int k ;

  cin >>k;

  int arr[n] ;

  for(int i =0; i <n; i++){
     cin >>arr[i];
  }


   cout << "Index is at" << binarySearch(arr, n, k);





}