//GStack.cpp
#include <iostream>
#include <list>
using namespace std;
GStack::GStack()
{
	list<T> top;
}

template <class Type>
bool GStack::isEmpty() const
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
template <class Type>
void GStack::push(const T& newItem)
{
		top.push_front(newItem);
}
template <class Type>
void pop()
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
template <class Type>
void pop(T& stackTop);
{
	if(top.isempty())
	{
		throw new StackException("Stack is empty");
	}
	else
	{
		stackTop = top.pop_front();
	}
}
template <class Type>
void getTop(T& stackTop) const
{
	if (top.isempty())
	{
		throw new StackException("Stack is empty");
	}
	else
	{
		stackTop = top.front();
	}
}
