//GStack.cpp
#include <iostream>
#include <list>
#include "GStack.h"
using namespace std;

template <class T>
GStack<T>::GStack()
{
	//cout << "in constractor\n" ;
	list<T> top;
}

template <class T>
bool GStack<T>::isEmpty() const
{
	if(top.isempty())
	{
		return true;
	}
	else
	{
		return false;
	}
}
template <class T>
void GStack<T>::push(const T& newItem)
{
		top.push_front(newItem);
}
template <class T>
void GStack<T>::pop()
{
	if(top.isempty())
	{
		cout << "stack is empty";
		return;
	}
	else
	{
		top.pop_front();
	}
}
template <class T>
void GStack<T>::pop(T& stackTop)
{
	if(top.isempty())
	{
		throw "Stack is empty";
	}
	else
	{
		stackTop = top.front();
		cout << stackTop << "is stackTop\n";
		top.pop_front();
	}
}
template <class T>
void GStack<T>::getTop(T& stackTop) const
{
	
		if (top.empty())
		{
			throw "Stack is empty";
		}
		else
		{
			cout << "HIIIII\n";
			stackTop = top.front();
			
		}

	
}
