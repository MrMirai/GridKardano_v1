#pragma once
#include <iostream>
#include <ctime>
#include <string>
#include <Windows.h>

ref class f {
public:
	array<int^, 2>^ sqr = gcnew array<int^, 2>(2, 2);
void arrfill(array<System::Int32^, 2>^ sqr, int k)
{
	int tmp = 0; //Переменная для заполнения решетки
	for (int i = 0; i < k; i++) { //заполнение решетки
		for (int j = 0; j < k; j++)
			sqr[i, j] = ++tmp;
	}
}
};