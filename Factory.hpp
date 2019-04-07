#pragma once

#include "Button.hpp"
#include "Widget.hpp"

class Factory
{
public:
	virtual Button* CreateButton() = 0;
	virtual Widget* CreateWidget() = 0;
};

class WinFactory : public Factory 
{
public:
	Button* CreateButton()
	{
		return new WinButton;
	}
	Widget* CreateWidget()
	{
		return new WinWidget;
	}
};

class LinuxFactory : public Factory 
{
public:
	Button* CreateButton()
	{
		return new LinuxButton;
	}
	Widget* CreateWidget()
	{
		return new LinuxWidget;
	}
};

class MacFactory : public Factory 
{
public:
	Button* CreateButton()
	{
		return new MacButton;
	}
	Widget* CreateWidget()
	{
		return new MacWidget;
	}
};