#include<bits/stdc++.h>

using namespace std;


void two_po(vector<int>&arr, int n){

  int start = 0;

  int end = n-1;

  while(start < end){

    if (arr[start] == 0){
       start++;
    } else if (arr[end] == 0){
        swap(arr[start], arr[end]);

        start++;
        end--;
    } else {
        end--;
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
 
 two_po(arr, n);

 for(int i =0 ; i< n;i++){
    cout << arr[i];
 }

}