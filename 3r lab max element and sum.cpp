//максимальный элемент и сумма

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int A[]{ 0,14,23,7,1,2,4,7,2,5,8 }, max = -1, maxindex = 0, k = 0;
	for (int i = 0; i < size(A); i++) {
		if (A[i] >= max) {
			max = A[i];
			maxindex = i;
		}
		k += A[i];

	}
	cout << "Индекс максимального элемента массива : " << maxindex << endl << "Максимальный элемент " << max << endl << "Сумма элементов : " << k << endl;
}
