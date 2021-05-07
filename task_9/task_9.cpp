#include "pch.h"
#include <iostream>
#include "List.h"

using namespace std;

int main()
{
	setlocale (LC_ALL, "rus");

	int x, index, ans, n;
	List s;
	cout << "Создать:\n\t1 - пустой список\n\t2 - заполненный случайными значениями\n";
	cin >> ans;
	switch (ans) 
	{
	case 1:
		break;
	case 2:
		cout << "\nВведите кол-во элементов: ";
		cin >> n;
		cout << endl;
		s.create_list(n);
		cout << "\nСписок создан!\n\n";
		break;
	}

	do
	{
		cout << "\n\nЧто необходимо сделать? (0 - для выхода)\n";
		cout << "\t1 - добавить элемент\n";
		cout << "\t2 - удалить элемент\n";
		cout << "\t3 - вывести список \n";
		cin >> ans;
		switch (ans)
		{
		case 1:
			cout << "\nВведите значение: ";
			cin >> x;
			cout << "\nВведите номер позиции: ";
			cin >> index;
			s.add_elem(x, index);
			cout << "\nЭлемент добавлен!\n\n";
			break;
		case 2:
			cout << "\nВведите номер позиции: ";
			cin >> index;
			s.del_elem(index);
			break;
		case 3:
			s.print();
			break;
		}

	} while (ans != 0);

}