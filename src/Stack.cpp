/*
 * Stack.cpp
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */

#include "Stack.h"

void Stack::push(Element* element)
{
	if(_last)
		element->_next = _last;
	_last = element;
}

Element* Stack::pop()
{
	if(!_last)
		return NULL;

	Element* elem = _last;
	_last = _last->_next;

	return elem;
}

Stack::Stack(): _last(NULL)
{

}

