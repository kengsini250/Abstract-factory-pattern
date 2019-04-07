#include "Factory.hpp"

int main()
{
	enum { Win = 1, Mac, Linux };
	std::cout <<
		Win<< " : Win\n" <<
		Mac<<" : Mac\n" <<
		Linux<<" : Linux\n\n"<<
		"--> ";
	int i;
	std::cin >> i;

	Factory* factory;
	switch (i)
	{
	case Win:
		factory = new WinFactory();
		break;
	case Mac:
		factory = new MacFactory();
		break;
	case Linux:
		factory = new LinuxFactory();
		break;
	default:
		factory = nullptr;
	}

	Button* myButton = factory->CreateButton();
	myButton->display();
	Widget* myWidget = factory->CreateWidget();
	myWidget->display();
}