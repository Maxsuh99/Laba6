/*Класс ? Одномерный массив.
Дополнительно перегрузить следующие операции:
* ?  умножение массивов;
[] ? доступ по индексу, int() ? размер массива;
= = ? проверка на равенство;
<= ? сравнение. */
#pragma once
using namespace std;
class Massiv{
	int *mass;
	int size;
public:
	Massiv();
	Massiv(int, int);
	Massiv(const Massiv &a);
	void show();
	void push(int);
	void del(int);
	int getSize()
	{
		return size;
	}
	Massiv operator *(const Massiv &a);
	Massiv operator ==(const Massiv &a);
	int operator <=(const Massiv &a);
	int operator [](int index);
	operator int() 
	{
		return size;
	}
};
