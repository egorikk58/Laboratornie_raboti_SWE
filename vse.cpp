//Все элементы
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int A[]{ 14,23,7,1,2,4,7,2,5,8 };
	bool a = true;
	for (int i = 0; i < size(A); i++) {
		if (A[i] % 7 != 0) {
			a = false;
			break;
		}
	}
	cout << a;
}