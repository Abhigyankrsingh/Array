#include<bits/stdc++.h>

using namespace std;


int seco(int arr[], int n){
    int lar = arr[0];
    int secon = INT_MIN;

    for(int i =0; i<n;i++){
        if(arr[i]> lar){
            secon = lar;
            lar = arr[i];
        } else if (arr[i] > secon && arr[i] != lar) {
            secon = arr[i];
        }
    }
    return secon;
}


int main(){
int arr[] = {1,2,3,4,5,6};
int n = 6;

int ans = seco(arr, n);
cout << ans<<endl;

}