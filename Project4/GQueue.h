//GQueue.h
#include <iostream>
#include <list>
using namespace std;
template <class T>
class GQueue
{
	public:
		GQueue();
		bool isEmpty() const;
		void push(const T& newItem);
		T pop();
		void getTop(T& queueFront) const;
	private:
		list<T> front;

	/* data */
};
template <class T>
GQueue<T>::GQueue()
{
	list<T> front;
}
template <class T>
bool GQueue<T>::isEmpty() const
{
	if(front.empty())
	{
		return true;
	}
	else
	{
		return false;
	}
}
template <class T>
void GQueue<T>::push(const T& newItem)
{
	front.push_back(newItem);
}
template <class T>
T GQueue<T>::pop()
{
	T element;
	if(front.empty())
	{
		throw "Quere is empty!";
	}
	else
	{
		element = front.front();
		front.pop_front();
	}
	return element;

}
template <class T>
void GQueue<T>::getTop(T& queueFront) const
{
	queueFront = front.front();
}