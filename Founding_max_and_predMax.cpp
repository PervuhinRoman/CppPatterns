#include <iostream>

using namespace std;

int main() {
  int i = 0, el = 0, mx_el, predmx_el, ind = 1, ind2 = 2;
  int arr[5];

  while(i < 5) {
    cin >> el;
    arr[i] = el;
    i++;
  }

  mx_el = arr[0];
  predmx_el = arr[1];

  for(int x = 0; x < 5; x++) {
    if(arr[x] > mx_el){
      predmx_el = mx_el;
      mx_el = arr[x];
      ind2 = ind;
      ind = x + 1;
    } else if (arr[x] > predmx_el) {
      predmx_el = arr[x];
      ind2 = x + 1;
    }
  }

  cout << mx_el << " " << predmx_el;
}
