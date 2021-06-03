#pragma once

class ShowMessage
{
private:
	void(*pShow)(std::wstring message);
public:
	ShowMessage();
	ShowMessage(void(*tmp)(std::wstring message));
	ShowMessage &operator()(std::wstring message);
	~ShowMessage();
};