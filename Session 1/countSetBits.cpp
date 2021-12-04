#include<iostream>
using namespace std;

bool checkBit(int n, int i){
	return ((n & (1 << i)) == (1 << i));
}

int main(){
	int n, i, c = 0;
	cin >> n;
	for(i = 0; i < 32; i++){
		if(checkBit(n, i))
			c++;
	}
	cout << c << endl;
}
