#include<iostream>
#include<cstdlib>
#include<ctime>
#include<algorithm>

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	// Задача 1. Сортировка первых пяти элементов
	/*std::cout << "Задача 1. Сортировка первых пяти элементов.\n\nИзначальный массив : \n";
	const int size1 = 10;
	int arr1[size1];
	srand(time(NULL));
	for (int i = 0; i < size1; i++) {
		arr1[i] = rand() % 10+1;
		std::cout << arr1[i] << ' ';
	}
	std::cout << std::endl;

	// Пузырьковая сортировка.
	//for (int i = size1/2 - 1; i > 0; i--) {  //int i = 4 , хотя и так работает, если первые пять.
	//	for (int j = 0; j < i; j++) {
	//		if (arr1[j] > arr1[j + 1])
	//			std::swap(arr1[j], arr1[j + 1]);
	//	}
	//}

	// Быстрая сортировка.
	std::sort(arr1,arr1+ 5); // или arr1 + size1/2


	// Итоговый массив.
	std::cout << "\nИтоговый массив\n";
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << ' ';
	std::cout << "\n\n";*/

	// Задача 2. Температура.
	/*std::cout << "\nЗадача 2. Температура в январе.\n";
	const int size2 = 31;
	int arr2[size2];
	srand(time(NULL));
	for (int i = 0; i < size2; i++) {
		arr2[i] = rand() % 30 -30;
		std::cout << arr2[i]<<", ";
	}
	std::cout << "\b\b.\n";
	std::cout << "Введите границу температуры для отображения : ";
	std::cin >> n;
	int sum = 0;
	int counter = 0;
	for (int i = 0; i < size2; i++) {
		sum += arr2[i];
		if (arr2[i] <= n)
			counter++;
	}
	std::cout << "Средняя температура за месяц равна " << (double)sum / size2 << '\n';
	std::cout << "Температура опускалась ниже " << n << " градусов " << counter << " раз\n";*/

	// Задача 3. Избирательный диапазон.
	std::cout << "\nЗадача 3. Отмечаем числа.\n";
	std::cout << "Введите начало диапазона : ";
	std::cin >> n;
	std::cout << "Введите конец диапазона : ";
	std::cin >> m;
	const int size3 = 20;
	int arr3[size3];
	srand(time(NULL));
	for (int i = 0; i < size3; i++) {
		arr3[i] = rand() % 100;
		if (arr3[i] >= n && arr3[i] <= m)
			std::cout << i + 1 << ".\t" << arr3[i] << " ! \n";
		else
			std::cout  << i + 1 << ".\t" << arr3[i] << " \n";

	}



	return 0;
}