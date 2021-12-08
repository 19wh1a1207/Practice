#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n;
	cin >> n;
	int count = 0;
	for(int i = 1; i <= (sqrt(n)); i++){
		if(n % i == 0){
			if(i == (n/i))
				count += 1;
			else
				count += 2;
		}
	}
	cout << count << endl;
}
