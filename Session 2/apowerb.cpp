#include<iostream>
using namespace std;

int compute(int a, int n){
	int res = 1, x = a;
	while(n > 0){
		if((n & 1) == 1)
			res = ((res * x) % 100000007);
		x = (x * x) % 1000000007;
		n = n >> 1;
	}
	return res;
}

int main(){
	int a, b;
	cin >> a >> b;
	cout << compute(a, b) << endl;
	return 0;
}
