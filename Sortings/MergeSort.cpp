#include <iostream>
using namespace std;

void merge(int ar[], int const left, int const mid, int const right)
{
	auto const n1 = mid - left + 1;
	auto const n2 = right - mid;

	auto *L = new int[n1],
		*R = new int[n2];

	for (auto i = 0; i < n1; i++)
		L[i] = ar[left + i];
	for (auto j = 0; j < n2; j++)
		R[j] = ar[mid + 1 + j];

	auto p1 = 0, 
		p2 = 0; 
	int p3 = left; 

	while (p1 < n1 && p2 < n2) {
		if (L[p1] <= R[p2]) {
			ar[p3] = L[p1];
			p1++;
		}
		else {
			ar[p3] = R[p2];
			p2++;
		}
		p3++;
	}
	
	while (p1 < n1) {
		ar[p3] = L[p1];
		p1++;
		p3++;
	}
	while (p2 < n2) {
		ar[p3] = R[p2];
		p2++;
		p3++;
	}
}

void mergeSort(int ar[], int const begin, int const end)
{
	if (begin >= end)
		return; 

	auto mid = begin + (end - begin) / 2;
	mergeSort(ar, begin, mid);
	mergeSort(ar, mid + 1, end);
	merge(ar, begin, mid, end);
}

void printArray(int A[], int size)
{
	for (auto i = 0; i < size; i++)
		cout << A[i] << " ";
	cout << endl;
}

int main()
{
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	auto arr_size = sizeof(arr) / sizeof(arr[0]);

	cout << "Given array is \n";
	printArray(arr, arr_size);

	mergeSort(arr, 0, arr_size - 1);

	cout << "\nSorted array is \n";
	printArray(arr, arr_size);
	return 0;
}
