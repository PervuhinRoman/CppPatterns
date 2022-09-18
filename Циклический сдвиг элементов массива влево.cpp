#include <iostream>

using namespace std;

int main() {
	int n, k;
	
	cin >> n >> k;
	
    int arr[n];
    
    
    for (int i = 0; i < n; i++) {
    	cin >> arr[i];
	}
	
	for (int i = 0, j = k - 1; i < j; i++, j--) {
		int t = arr[i];
		
		arr[i] = arr[j];
		arr[j] = t;
	}
	
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	
	cout << "\n";
	
	for (int i = k, j = n - 1; i < j; i++, j--) {
		int t = arr[i];
		
		arr[i] = arr[j];
		arr[j] = t;
	}
	
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	
	cout << "\n" << "Final: ";
	
	for (int i = 0, j = n - 1; i < j; i++, j--) {
		int t = arr[i];
		
		arr[i] = arr[j];
		arr[j] = t;
	}
	
	
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}
