#include "masiv.h"
#include<iostream>
using namespace std;
Massiv::Massiv()
{
	mass = NULL;
	size = 0;
}

Massiv::Massiv(const Massiv & a)
{
	mass = new int[a.size];
	size = a.size;
	for (int i(0); i < a.size; i++)
	{
		mass[i] = a.mass[i];
	}
}

void Massiv::show()
{
	cout << "( ";
	for (int i(0); i < size; i++) {
		cout << mass[i];
		if (i != size - 1)
			cout << " , ";
	}
	cout << " )\n";
}

void Massiv::push(int x)
{
	if (mass == NULL)
	{
		size = 1;
		mass = new int[size];
		mass[0] = x;
		return;
	}

	int *a = new int[size];
	for (int i(0); i< size; i++)
		a[i] = mass[i];
	delete (mass);
	mass = new int[size + 1];
	for (int i(0); i< size; i++)
		mass[i] = a[i];
	mass[size] = x;
	size++;
}

void Massiv::del(int index)
{
	for (int i = index; i < size - 1; i++)
	{
		mass[i] = mass[i + 1];
	}
	size--;
	int *a = new int[size];
	for (int i(0); i< size; i++)
		a[i] = mass[i];
	delete (mass);
	mass = new int[size];
	for (int i(0); i< size; i++)
		mass[i] = a[i];
}
Massiv Massiv :: operator *(const Massiv &a)
{
	Massiv  tmp;
	if (size = a.size)
	{
		tmp.size = size;
		tmp.mass = new int[tmp.size];
		for (int i(0); i < size; i++)
		{
			tmp.mass[i] = mass[i] * a.mass[i];
		}
		return tmp;
	}
	else
	{
		std::cout << "\nsize_1 != size_2\n";
		return tmp;
	}
}

Massiv Massiv:: operator ==(const Massiv &a)
{
	{
		if (mass != NULL)
		delete(mass);

		mass = new int[a.size];

		for (int i(0); i < a.size; i++)
		{
			mass[i] = a.mass[i];
		}
		size = a.size;
		return *this;
	}
}
int Massiv :: operator <=(const Massiv &a)
{
	return size <= a.size;
}

int Massiv :: operator [](int index)/*�������� ������ �������*/
{
	if (index < 0 || index >= size)
	{
		cout << "Error index" << endl;
		return -1;
	}
	return mass[index];
};
