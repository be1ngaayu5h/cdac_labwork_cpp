#include <iostream>
using namespace std;

float calculatePercent(int a[]) {
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += a[i];
	}
	return ((float)sum/500*100);
}

int main() {
	int array[5];
	for (int i = 0; i < 5; i++) {
		cout << "Enter marks of subject " << i + 1 << " : ";
		cin >> array[i];
	}
	cout << "Percent obtained: " << calculatePercent(array) << endl;
	return 0;
}
