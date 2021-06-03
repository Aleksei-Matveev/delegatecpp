#include "stdafx.h"

void MsBoxShow(std::wstring message) {
	MessageBox(NULL, message.c_str(), L"Message", MB_OK);
}

void Show(std::wstring message) {
	setlocale(LC_ALL, "RUS");
	std::wcout << message<<std::endl;
}

int main()
{
	
	Student student, y1;

	ShowMessage method = MsBoxShow;
	ShowMessage method1 = Show;
	student.set(method);
	y1.set(method1);
	y1.Move(5);
	student.Move(3);
	
	system("pause");
    return 0;
}