//For each iteration compare the first element with all the others, when min found swap the first with the min
//For next iteration start with the second element

#include<iostream>
using namespace std;

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void SelectionSort(int ar[], int n)
{
	int i, j;
	for(i = 0; i < n - 1; i++)
	{
		int min_ind = i;
		for(j = i + 1; j < n; j++)
		{
			if(ar[j] < ar[min_ind])
				min_ind = j;
		}
		swap(&ar[i], &ar[min_ind]);
	}
}

void printArray(int ar[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << ar[i] << " ";
	}
	cout << endl;
}

int main()
{
	int n, i;
	cin >> n;
	int ar[n];
	for(i = 0; i < n; i++)
		cin >> ar[i];
	SelectionSort(ar, n);
	printArray(ar, n);
	return 0;
}
