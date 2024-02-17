#include<bits/stdc++.h>

using namespace std;

bool amstro(int num, int digit){

  int n = num;  
  int ans = 0;
  int rem;

  while(n){
    rem = n % 10;
    n = n / 10;
    ans = ans + pow(rem, digit);
  }

  if(ans == num){
    return true;
  } else {
    return false;
  }
}

int digitCount(int n){

    int cnt = 0;

    while (n){
        cnt++;
        n /= 10;
    }

    return cnt;
}

int main(){

    int n;

    cout << "Enter a number: ";
    cin >> n;

    int digit = digitCount(n);

    cout << amstro(n, digit);

    return 0;
}
