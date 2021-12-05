//Comparing adjacent elements
//After every iteration we find one max value

#include<iostream>
using namespace std;

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void BubbleSort(int ar[], int n)
{
	int i, j;
	for(i = 0; i < n - 1; i++)
	{
		for(j = 0; j < n - i - 1; j++)
		{
			if(ar[j] > ar[j + 1])
				swap(&ar[j], &ar[j + 1]);
		}
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
	BubbleSort(ar, n);
	printArray(ar, n);
	return 0;
}
