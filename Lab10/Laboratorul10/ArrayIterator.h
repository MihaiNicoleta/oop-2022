#pragma once
#include <cstdio>
using namespace std;

template<class T>
class ArrayIterator
{
private:
	T* elem;
	int Current; // mai adaugati si alte date si functii necesare pentru iterator
public:
	ArrayIterator();
	ArrayIterator(int curent, T* _elem);
	ArrayIterator& operator ++ ();
	ArrayIterator& operator -- ();
	bool operator= (ArrayIterator<T>&);
	bool operator!=(ArrayIterator<T>&);
	T* GetElement();
};

template<class T>
inline ArrayIterator<T>::ArrayIterator()
{
	Current = 0;
	elem = nullptr;
}

template<class T>
inline ArrayIterator<T>::ArrayIterator(int curent, T* _elem)
{
	Current = curent;
	memcpy(elem, _elem, sizeof(T*));
	delete _elem;
}

template<class T>
inline ArrayIterator<T>& ArrayIterator<T>::operator++()
{
	elem++;
	Current++;
	return *this;
}

template<class T>
inline ArrayIterator<T>& ArrayIterator<T>::operator--()
{
	elem--;
	Current--;
	return *this;
}

template<class T>
inline bool ArrayIterator<T>::operator=(ArrayIterator<T>&A)
{
	if (this == A)
		return true;
	return false;
}

template<class T>
inline bool ArrayIterator<T>::operator!=(ArrayIterator<T>&A)
{
	if (this != A)
		return true;
	return false;
}

template<class T>
inline T* ArrayIterator<T>::GetElement()
{
	return elem;
}
