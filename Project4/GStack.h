//GStack.h
#include <iostream>
#include <list>
using namespace std;

template <class T>
class GStack
{
public:
	GStack();
	bool isEmpty() const;
	void push(const T& newItem);
	void pop();
	void pop(T& stackTop);
	void getTop(T& stackTop) const;
	//~GStack();
	/* data */
private:
	list<T> top;
};
template <class T>
GStack<T>::GStack()
{
	cout << "in constractor\n" ;
	list<T> top;
}

template <class T>
bool GStack<T>::isEmpty() const
{
	if(top.empty())
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
	if(top.empty())
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
	if(top.empty())
	{
		throw "Stack is empty";
	}
	else
	{
		stackTop = top.front();
		top.pop_front();
		//cout << top.front() << "after pop_front() \n";
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
			stackTop = top.front();
			//cout << stackTop << "is stackTop\n";
			//top.pop_front();
		}

	
}
