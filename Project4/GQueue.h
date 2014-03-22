//GQueue.h
#include <iostream>
#include <list>
using namespace std;
template <class Type>
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