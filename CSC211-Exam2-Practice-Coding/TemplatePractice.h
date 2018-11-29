#pragma once
#include <iostream>

using namespace std;

template <typename T> class 
TemplatePractice
{
	private:
		T a, b;
	public:
		TemplatePractice();		// DEFAULT CONSTRUCTOR
		TemplatePractice(T, T); // ANOTHER CONSTRUCTOR

		~TemplatePractice();	// DESTRUCTOR

		T TemplateFindMax();
		T TemplateFindMax(T, T);
};

template <typename T>
TemplatePractice<T>::TemplatePractice()
{
	//Default Constructo
}

template <typename T>
TemplatePractice<T>::TemplatePractice(T a, T b)
{
	this->a = a;
	this->b = b;
}

template <typename T>
TemplatePractice<T>::~TemplatePractice()
{
	//Default Constructo
}


template <typename T>
T TemplatePractice<T>::TemplateFindMax()
{
	return (a > b ? b : a);
}

template <typename T>
T TemplatePractice<T>::TemplateFindMax(T a, T b)
{
	return (a > b ? b : a);
}