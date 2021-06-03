#pragma once

class Student
{
private: ShowMessage method;
public:
	Student();
	~Student();
	void Move(int distance);
	ShowMessage  get();
	void set(ShowMessage );
private:
	void Moving(std::wstring message);
};

