#include<iostream>
using namespace std;

template<typename T>
T const& max_element(T const* l , unsigned sz)
{
    T const* max_value(l);
    for (unsigned i = 1 ; i < sz ; ++i)
    {
        if (l[i] > *max_value)
        {
            max_value = &(l[i]);
        }
        
    }
    return *max_value;
}

int main(int argc, char const *argv[])
{
    //int const* 形参 T const* 
    int l[] = {2,0,1,1,0,8,2,5};
    //char const*
    char c1[] = "August";

    // cout << max_element<int>(l,8) <<endl;
    // cout << max_element<char>(c1,6) <<endl;
    cout << max_element(l,8) <<endl;
    cout << max_element(c1,6) <<endl;
    return 0;
}
