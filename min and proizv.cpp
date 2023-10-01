//мин и произедение.

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int A[]{ 14,23,7,1,2,4,7,2,5,8 }, min = 1000, minindex = 0, k = 1;
	for (int i = 0; i < size(A); i++) {
		if (A[i] <= min) {
			min = A[i];
			minindex = i;
		}
		k *= A[i];

	}
	cout << "Индекс минимального элемента массива : " << minindex << endl << "Минимальный элемент " << min << endl << "Произведение элементов : " << k << endl;
}
