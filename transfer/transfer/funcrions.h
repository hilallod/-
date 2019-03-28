#pragma once
#include "oper.h"
#include<iostream>

using namespace std;

template <class T>

class Operat
{
private:
	T dvoich;
	T des;
public:
	Operat(T a, T b): dvoich(a), second(b)
	{}
	T operator+(T a, T b);
	T operator-(T a, T b);
};


