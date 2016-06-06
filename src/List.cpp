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

void List::remove(std::string name)
{
	//TODO: Implement this method
	Element* _aux = _first; //stores the first list item
	Element* _before = NULL; //

	if(_first != NULL){
		while(_aux != NULL){
			if(_aux -> getName() == name){
				if (_aux == _first){
					_aux = _aux -> _next; 
				}
				else{
					_before -> _next = _aux -> _next;
					delete(_aux);
				}
				return;
			}
			_before = _aux;
			_aux = _aux -> _next;
		}
	}
	else{
		cout << "The list hasn't items." << endl;
	}
}
