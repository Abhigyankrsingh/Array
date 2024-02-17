#include<bits/stdc++.h>

using namespace std;


bool amstro(int num, int digit){

  int n = num;  
  int ans =0;
  int rem;

  while(n){
    rem = n%10;

    n = n/10;

    ans = ans + pow(rem, digit);
  }

  if(ans == num){
    return 1;
  } else {
    return 0;
  }
    
}



int count (int n){

    int cnt = 0;

    while (n){
        cnt++;
        n /= 10;
        
    }

    return cnt;
}

int main(){

    int n;

    cin >> n;

    int digit = count(n);

    cout << amstro(n,digit);


}