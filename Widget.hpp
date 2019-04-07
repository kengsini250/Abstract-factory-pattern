#pragma once
#include <iostream>

class Widget
{
public:
	virtual void display() = 0;
};

class WinWidget : public Widget
{
public:
	void display()
	{
		std::cout << "WinWidget class\n";
	}
};

class LinuxWidget : public Widget
{
public:
	void display()
	{
		std::cout << "LinuxWidget class\n";
	}
};

class MacWidget : public Widget
{
public:
	void display()
	{
		std::cout << "MacWidget class\n";
	}
};