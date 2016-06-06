/*
 * List.cpp
 *
 *  Created on: May 22, 2016
 *      Author: raydelto
 */

#include "List.h"
#include <iostream>
#include <cstdlib>
using namespace std;

List::List(): _first(NULL), _last(NULL)
{


}

void List::add(Element* element)
{
	//TODO: Implement this method
	if(_first == NULL){ //if the list is empty, do this.
		_first = element;
		_last = element;
	}
	else{
		_last -> _next = element;
		_last = element;
	}
}

void List::remove(int index)
{
	//TODO: Implement this method
	cout << "You should write the code for removing the index " << index << endl;
}
