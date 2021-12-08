//Still neeed to work on

#include<iostream>
using namespace std;

bool checkBit(int n, int i){
	return (n & (1 << i) == (1 << i));
}

bool subsetSum(int *ar, int n, int k){
	int sum;
	for(int i = 0; i < (1 << n); i++){
		sum = 0;
		for(int j = 0; j < 32; j++){
			if(checkBit(i, j))
				sum += ar[j];
		}
		if(sum == k)
			return true;
	}
	return false;
}

int main(){
	int n, i, k;
	cin >> n;
	int ar[n];
	for(i = 0; i < n; i++)
		cin >> ar[i];
	cin >> k;
	if(subsetSum(ar, n, k))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	return 0;
}
