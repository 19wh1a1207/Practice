#include<iostream>
using namespace std;

int main(){
	int i, j;
	cin >> i >> j;
	cout << ((1 << i) + (1 << j)) << endl;
	return 0;
}

