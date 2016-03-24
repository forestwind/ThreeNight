#pragma once

template <class T>

class Singleton
{
public:
	static T& getInstance()
	{
		static T instance; 
		return instance;
	}
	
	static T* getPointer()
	{
		return &getInstance();
	}

	static const T& getConst()
	{
		return getInstance();
	}

public:
	Singleton() {}
	~Singleton() {}

private:
	Singleton(const Singleton &);
	Singleton& operator=(const Singleton&);

};