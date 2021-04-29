#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int arr[n * n];
  bool x = 1;

  int cnt1 = 0;

  for(int i = 0; i < n * n; i++) {
    arr[i] = !x;
    x =! x;
    cnt1++;

    if(cnt1 == n && n % 2 == 0){
      x =! x;
      cnt1 = 0;
    } 
  }

  int cnt = 0;

  for(auto now : arr){
    cout << now << " ";
    cnt++;
    if(cnt == n){
      cout << endl;
      cnt=0;
    }
  }
}
