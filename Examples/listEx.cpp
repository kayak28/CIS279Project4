//listEx.cpp
//list::front
#include <iostream>
#include <list>

using namespace std;
int main()
{
	list<int> mylist;

	mylist.push_back(77);
	mylist.push_back(22);
	//now front equals 77, and back 22
	mylist.front() -= mylist.back();
	cout << "mylist.front() is now " << mylist.front() << "\n";

	int sum(0);
	list<int> yourlist;
	for (int i = 0; i <= 10; ++i)
	{
		yourlist.push_back(i);
	}

	while(!mylist.empty())
	{
		sum += mylist.front();
		mylist.pop_front();
	}
	cout << "total: " << sum << "\n";

	int *p = new int [11];
	int addtion; 
	for (int i = 0; i <= 10; ++i)
	{
		p[i] = i;
	}
	for (int i = 0; i <= 10; ++i)
	{

		addtion += p[i];
	}
	cout << "addtion " << addtion << "\n";



	return 0;

	/*
	output my list front is now 55
	*/
}
