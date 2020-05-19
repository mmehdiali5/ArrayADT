#include<iostream>
using namespace std;
#ifndef ARRAY_H
#define ARRAY_H
template<typename T>
class Array
{
private:
	T * data;
	int capacity = 0;
	int isValidIndex(int index)const
	{
		return index >= 0 && index < capacity;
	}
public:
	Array&operator =(const Array& ref);
	T& operator[](int index);
	Array();
	~Array()
	{
		cout << "\n~Array()";
		if (data != nullptr)
		{
			delete[]data;
		}
		data = nullptr;
		capacity = 0;
	}
	Array(const Array & ref)
	{
		if (ref.data == nullptr)
		{
			data = nullptr;
			capacity = 0;
			return;
		}
		capacity = ref.capacity;
		data = new T[capacity];
		memcpy(data, ref.data, capacity * sizeof(T));
	}
	const T&  operator[](int index)const
	{
		if (isValidIndex(index))
		{
			return data[index];
		}
		exit(0);
	}

	int getCapacity()const
	{
		return capacity;
	}
	void reSize(int newCap)
	{
		if (newCap < 0)
		{
			this->~Array();
			return;
		}
		if (capacity == 0)
		{
			T * ptr = new T[newCap];
			this->~Array();
			capacity = newCap;
			data = ptr;
			return;
		}
		T * ptr = new T[newCap];
		memcpy(ptr, data, (newCap < capacity ? newCap : capacity) * sizeof(T));
		this->~Array();
		capacity = newCap;
		data = ptr;
	}
};

template<typename T>
Array<T>::Array()
{
	data = 0;
	capacity = 0;
}

template<typename G>
Array<G>& Array<G>:: operator =(const Array & ref)
{
	if (this == &ref)
	{
		return *this;
	}
	this->~Array();
	if (ref.data == nullptr)
	{
		data = nullptr;
		capacity = 0;
		return *this;
	}
	capacity = ref.capacity;
	data = new G[capacity];
	memcpy(data, ref.data, capacity * sizeof(G));
}

template<typename T>
T& Array<T>::operator[](int index)
{
	if (isValidIndex(index))
	{
		return data[index];
	}
	exit(0);
}

#endif 

