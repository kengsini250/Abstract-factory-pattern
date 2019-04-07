#pragma once

#include <iostream>

class Button 
{
public:
	virtual void display() = 0;
	virtual ~Button(){}
};

class WinButton : public Button
{
public:
	void display()
	{
		std::cout << "WinButton class \n";
	}
	virtual ~WinButton(){}
};

class LinuxButton : public Button
{
public:
	void display()
	{
		std::cout << "LinuxButton class \n";
	}
	virtual ~LinuxButton() {}
};

class MacButton : public Button
{
public:
	void display()
	{
		std::cout << "MacButton class \n";
	}
	virtual ~MacButton() {}
};

