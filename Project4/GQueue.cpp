//GQueue.cpp
template <class Type>
GQueue::GQueue()
{
	list<T> front;
}
template <class Type>
bool GQueue::isEmpty() const
{
	if(front.isempty())
	{
		return true;
	}
	else
	{
		return false;
	}
}
template <class Type>
void GQueue::push(const T& newItem)
{
	front.push_back();
}
template <class Type>
T GQueue::pop()
{
	T element;
	if(front.isempty())
	{
		throw new QuereException("Quere is empty!");
	}
	else
	{
		element = front.pop_front();
	}
	return element;

}
template <class Type>
void GQueue::getTop(T& queueFront) const
{
	queueFront = front.front();
}