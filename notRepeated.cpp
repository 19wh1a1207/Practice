#include<iostream>
using namespace std;

int main(){
	int n, i;
	cin >> n;
	int ar[n];
	for(i = 0; i < n; i++)
		cin >> ar[i];
	int res = 0;
	for(i = 0; i < n; i++)
		res ^= ar[i];
	cout << res << endl;
	return 0;
}
