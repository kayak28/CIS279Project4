//GStack.h
#include <iostream>
using namespace std;

template <class Type>
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
	T *stack;
};

