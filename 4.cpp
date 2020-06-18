/*

*/
//vstest.h
#pragma once
template<typename T>
T const& func(T const &v);

template<typename T>
T const& func(T const &v)
{
	return v;
};
//vstest.cpp
#include "vstest.h"
void caller1();
void caller2();

int main()
{
	caller1();
	caller2();
	return 0;
}
//caller1
#include<iostream>

using namespace std;
template<typename T>
void func(T const &v)
{
	cout << "func1: " << v << endl;
}
void caller1() {
	func(1);
	func(0.1);
}

//caller2
#include<iostream>

using namespace std;
template<typename T>
void func(T const &v)
{
	cout << "func2: " << v << endl;
}
void caller1() {
	func(2);
	func(0.2f);
}
