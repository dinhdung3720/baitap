#ifndef FUNCTION_H
#define FUNCTION_H
#include <vector>

template<typename T>
bool verify(std::vector<T> &vec, T &value )
{
    for(auto it : vec)
    {
        if(it == value)
        {
            return false;
        }
        else
        {
            return true;
        };
    };
}

;
#endif