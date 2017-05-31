#pragma once

template <typename T>
class Tstack
{
private:
	T *data;
	size_t allelement;
	size_t used;
public:
	Tstack()
	{
		allelement = 0;
		used = 0;
		data = 0;
	};
	Tstack(size_t size)
	{
		used = 0;
		allelement = size;
		this->data = new T[size];
	}
	void add(const T& elem)
	{
		if (this->used == this->allelement) 
			throw 34;
		
		this->data[this->used++] = elem;
	}

	T get()
	{
		if (this->used == 0) 
			throw 132;

		return this->data[--this->used];
	}

	T back()
	{
		if (this->used == 0) 
			throw 2;

		return this->data[this->used-1];
	}

	void resize(size_t newSize)
	{
		T *tmp;
		size_t tmpMS = allelement;
		if (used > newSize)
			throw 60;
		allelement = newSize;
		tmp = new T[allelement];
		for (size_t i = 0; i < allelement && i < tmpMS; i++)
			tmp[i] = data[i];
		

		delete[] data;
		data = tmp;
	}

};