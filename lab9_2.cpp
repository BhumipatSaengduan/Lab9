#include<iostream>
using namespace std;

//Write the function printO() here
void printO(int col, int row) {
	if (col >= 1 && row >= 1){
		for (int i = 1; i <= col; i++) {
			for (int j = 1; j <= row; j++) {
				cout << "O";
			}
			cout << "\n";
		}
	}
	else 
		cout << "Invalid input";
}

int main() {

	printO(2, 2);
	cout << "\n";

	printO(3, 5);
	cout << "\n";

	printO(5, 3);
	cout << "\n";

	printO(0, 3);
	cout << "\n";

	printO(7, -1);
	cout << "\n";

	return 0;
}