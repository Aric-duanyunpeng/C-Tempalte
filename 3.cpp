//func.h
template<typename T>
T const& func(T const &v);

//func.cpp
template<typename T>
T const& func(T const &v)
{
    return v;
};
template int const& func(int const &v);

//main
#include "func.h"
int main() { func(0); }
