//Stack.cpp
#include <iostream>
using namespace std;

class Stack
{
	public:
		Stack(int = 0);
		~Stack();

		void push(int);
		int pop();
		void display();
	private:
	int *p;
	int top;
	int length;	

	/* data */
};

Stack::Stack(int size)
{
	top = -1;
	length = size;
	if (size == 0)
	{
		p = 0;
	}
	else
	{
		p = new int[length];
	}
}
Stack::~Stack()
{
	if(p!=0)
	{
		delete [] p;
	}
}
void Stack::push(int elem)
{
	if(p == 0)
	{
		cout << "Stack of zero size" << "\n";
		cout << "Enter a size of Stack" << "\n";
		cin >> length;
		p = new int [length];
	}
	if(top == (length-1))
	{
		cout << "Can not push any more"<< "\n";
		return ;
	}
	else
	{
		top++;
		p[top] = elem;
	}
}
int Stack::pop()
{
	if(p == 0||top ==-1)
	{
		cout << "Stack empty!\n";
		return -1;
	}
	int ret = p[top];
	top--;
	length--;
	return ret;
}
void Stack::display()
{
	for(int i = 0; i <= top; i++)
	{
		cout << p[i] << " ";
	}
	cout << "\n";
}
int main()
{
	Stack s1;
	s1.push(1);
	s1.display();
	s1.push(2);
	s1.push(3);
	s1.push(4);
	s1.push(5);
	s1.display();
	s1.pop();
	s1.display();
	s1.pop();
	s1.display();
	s1.pop();
	s1.display();
	s1.pop();


}