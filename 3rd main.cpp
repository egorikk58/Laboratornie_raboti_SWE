
//Андреев Егор 23ВП2
//3)	Найти количество элементов массива, начиная со второго, значение которых больше суммы индексов элементов, стоящих перед ними.

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int A[]{1,1,18,4},k=0,kol=0;
	for (int i = 0; i <size(A);i++) {
		k +=i;
		if (A[i] >k){
			kol++;
		}
	}
	cout << "Количество  удовлетворяющих условию элементов массива: " << kol << endl;
}

//максимальный элемент и сумма
/*
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
*/

//мин и произедение 
/*
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
*/

//Хотя бы один 
/*
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int A[]{ 14,23,7,1,2,4,7,2,5,8 };
	bool a = false;
	for (int i = 0; i < size(A); i++) {
		if (A[i] % 7 == 0) {
			a = true;
			break;
		}
	}
	cout << a;
}
*/
/*
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
*/

