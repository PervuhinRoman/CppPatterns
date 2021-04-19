#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k;

    cin >> n >> k;

    int left = 0, right = 1, mn = 1e9;

    vector <int> arr(n);

    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int s = arr[0];

    while(right < n) {
        while(s <= k && right < n) {
            s+=arr[right++];
        }

        if(s > k && right - left < mn) {
            mn = right - left;
        }

        s -= arr[left++];
    }

    cout << (mn == 1e9 ? -1 : mn);
}
