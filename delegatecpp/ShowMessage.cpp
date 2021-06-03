#include "stdafx.h"

ShowMessage::ShowMessage() {}

ShowMessage::ShowMessage(void(*tmp)(std::wstring message))
{
	pShow = tmp;
}

ShowMessage &ShowMessage::operator()(std::wstring message)
{
	if (pShow)
		pShow(message);
	return *this;
}

ShowMessage::~ShowMessage(){}