#include<iostream>
using namespace std;

void ToH(int n, char src, char dest, char temp){
	if (n == 0)
		return;
	ToH(n - 1, src, temp, dest);
	cout << "Move " << n << " from " << src << " to " << dest << endl;
	ToH(n - 1, temp, dest, src);
}

int main(){
	int n, steps;
	cin >> n;
	steps = (1 << n) - 1;
	cout << steps << endl;
	ToH(n, 'A', 'C', 'B');
	return 0;
}
