#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int i = 0, newb = 0, flag = 0, c = 0;
    const int N = 8;
    
    vector <int> arr;
    
    for(int i = 0; i < N; i++) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    
    cin >> newb;
    
    arr.push_back(newb);
    
    cout << "Before: ";
    
    for (auto now : arr) {
        cout << now << " ";
    }
    
    cout << endl;
    
    for (int j = 0; j < N + 1; j++) { 
      int num_mn = j; 

      for (int i = j; i < N + 1; i++) { 
          if (arr[i] < arr[num_mn]) {
              num_mn = i;
          }
      }
      int temp;
      temp = arr[j];
      arr[j] = arr[num_mn];
      arr[num_mn] = temp;
    }

    for(int q = 0; q < N/2; q++) {
      int el;
      el = arr[q];
      arr[q] = arr[N - c];
      arr[N - c] = el;
      c++;
    }

    i = 0;

    while(arr[i] != newb) {
      i++;
    }

    cout << "After: ";
    for (auto now : arr) {
        cout << now << " ";
    }

    cout << endl;
    cout << i + 1;
}
