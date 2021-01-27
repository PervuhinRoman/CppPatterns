#include <iostream>

using namespace std;

void quickSort(int array[], int low, int high)                   //функция сортировки
{
    int i = low;                                                 //границы изначального массива
    int j = high;

    int pivot = array[(i + j) / 2];                              //"опорный" элемент, опираясь на который массив будет разбиваться на числа меньше pivot и  числа больше pivot
    int temp;

    while (i <= j)                                               
    {
        while (array[i] < pivot)
            i++;
        while (array[j] > pivot)
            j--;

        if (i <= j)
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            
            i++;
            j--;
        }
    }
    if (j > low)
        quickSort(array, low, j);
    if (i < high)
        quickSort(array, i, high);
}

int main() {
	int N;
	cin >> N;

	int arr[N];

	for(int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	int lw = 0, hg = sizeof(arr) / sizeof(arr[0]);

	quickSort(arr, lw, hg);

	for(int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
}