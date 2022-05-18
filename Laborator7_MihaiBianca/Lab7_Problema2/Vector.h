#pragma once
#pragma once
#include <iostream>
#include <cstring>

template<class T>
class Vector
{
	unsigned long size;
	T* v;
public:
	Vector();
	void Push(int new_element);
	T& Pop();
	void Delete(unsigned long index);
	void Insert(T new_element, unsigned index);
	void Sort(bool (*callback)(T& a, T& b) = nullptr);
	T& Get(unsigned long index);
	void Set(T element, unsigned index);
	unsigned long Count();
	long long firstIndexOf(T parameter, bool(*callback)(T a, T b) = nullptr);

};

template<class T>
inline Vector<T>::Vector()
{
	size = 0;
	v = nullptr;
}

template<class T>
inline void Vector<T>::Push(int new_element)
{
	if (size == 0)
		v = new T[1];
	else
	{
		T* temp = new T[size];
		for (int i = 0; i < size; i++)
			temp[i] = v[i];
		delete[] v;
		v = new T[2 * size];

		for (int i = 0; i < size; i++)
			v[i] = temp[i];
		delete[] temp;
	}
	v[size++] = new_element;
}

template<class T>
inline T& Vector<T>::Pop()
{
	if (size != 0)
	{
		T temp = v[size];
		size--;
		return temp;
	}
}

template<class T>
inline void Vector<T>::Delete(unsigned long index)
{
	if (index >= 0 && index < size)
	{
		for (unsigned i = index; i < size; i++)
			v[i] = v[i + 1];
		size--;
	}
}

template<class T>
inline void Vector<T>::Insert(T new_element, unsigned index)
{
	if (index > 0 && index < size)
	{
		T* temp = new T[size];
		for (int i = 0; i < size; i++)
			temp[i] = v[i];
		delete[] v;
		v = new T[2 * size];
		for (int i = 0; i < size; i++)
			v[i] = temp[i];
		for (int i = size; i > index; i--)
			v[i] = v[i - 1];
		size++;
		v[index] = new_element;
	}
	else if (index == 0 && size == 0)
	{
		v = new T[1];
		v[size++] = new_element;
	}
}

template<class T>
inline void Vector<T>::Sort(bool(*callback)(T& a, T& b))
{
	int ultim, n1, i;
	ultim = size - 1;
	while (ultim > 0)
	{
		n1 = ultim - 1;
		ultim = 0;
		for (i = 0; i <= n1; i++)
		{
			if ((v[i] < v[i + 1] && callback == nullptr) || (callback != nullptr && !callback(v[i], v[i + 1])))
			{
				T aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				ultim = i;
			}
		}
	}



}

template<class T>
inline T& Vector<T>::Get(unsigned long index)
{
	if (index >= 0 && index < size)
		return v[index];
}

template<class T>
inline void Vector<T>::Set(T element, unsigned index)
{
	if (index >= 0 && index < size)
	{
		v[index] = element;
	}
	else
	{
		printf("Index deja folosit");
	}
}

template<class T>
inline unsigned long Vector<T>::Count()
{
	return size;
}

template<class T>
inline long long Vector<T>::firstIndexOf(T parameter, bool(*callback)(T a, T b))
{
	for (unsigned i = 0; i < size; i++)
		if ((callback == nullptr && v[i] == parameter) || (callback != nullptr && callback(v[i], parameter)))
			return i;
	return -1;
}
