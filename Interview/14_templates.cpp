//#include "14_templates.h"

template <typename T>
Max<T>::Max(T _a, T _b): a(_a),b(_b) {}


template <typename T>
T Max<T>::GetMax()
{
	if(a > b) 
	{
		return a;
	}
	else
	{
		return b;
	}
}

//template class Max<int>;


