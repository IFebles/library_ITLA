/*
 * Menu.cpp
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */

#include "Menu.h"
#include <iostream>

using namespace std;

Stack mystack;

void Menu::show()
{
	//TODO: Implement this method.
	cout << "* Welcome to the menu for the library! *" << endl;
	
	A:
	cout << endl << "Select an option:" << endl;
	cout << "0) Exit" << endl;
	cout << "1) Register book" << endl;
	cout << "2) Fetch book" << endl << endl;

	string resp = "";
	while(resp == "")
	{
		cout << ">> ";
		cin >> resp;
		if(resp != "0" && resp != "1" && resp != "2")
			resp = "";
	}

	
	if(resp == "1")
	{
		string resp2 = "";
		while(resp2 == "")
		{
			cout << "Type the name of the book: ";
			cin >> resp2;
		}
		Element* elem = new Element(resp2);
		mystack.push(elem);

		cout << "* Added! *" << endl;
		goto A;
	}
	else if(resp == "2")
	{
		Element* elem = mystack.pop();
		if(elem)
		{
			cout << "* Here is the book named \"" << elem->_name << "\" *" << endl;
			delete elem;
		}
		else
			cout << "* There is no book left in stock *" << endl;
		goto A;
	}
	

	cout << "Bye!" << endl;
}

Menu::Menu()
{

}

