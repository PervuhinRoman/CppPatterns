#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int arr[N][N];
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
                arr[i][j] = 0;
        }
    }
    
    for(int i = 0; i < N; i++){
        arr[i][N - 1 - i] = 1;
    }
    
    for(int i = 0; i < N - 1; i++){
        for(int j = 0; j < N - i - 1; j++){
            arr[i][j] = 2;
        }
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

/*
5 5
2 2 2 2 1 
2 2 2 1 0 
2 2 1 0 0 
2 1 0 0 0 
1 0 0 0 0
*/
