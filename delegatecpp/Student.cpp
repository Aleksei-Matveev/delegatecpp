#include "stdafx.h"

Student::Student(){}

Student::~Student(){}

void Student::Move(int distance)
{
	for (int i = 1; i <= distance; i++)
	{
		wchar_t buf[100];
		swprintf_s(buf, L"Пройдено......километров : %d", i);
		std::wstring message(buf);
		Moving(buf);
		Sleep(1000);
	}
}
ShowMessage  Student::get()
{
	return  method;
}
void Student::set(ShowMessage tmp)
{
	method = tmp;
}
	void Student::Moving(std::wstring message) {

	method(message);
}