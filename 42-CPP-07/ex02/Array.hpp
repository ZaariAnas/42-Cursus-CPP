#pragma once
#include <iostream>

template <typename T> class Array {

private:
    T * _array;
    unsigned int _size;
public:
    Array(){
        _array = new T[0];
        _size = 0;
    };

    Array(unsigned int n){
        _array = new T[n];
        _size = n;
    };

    Array(const Array& copy) : _array(NULL), _size(copy._size)
    {
        if(this != &copy)
            *this = copy;
    }

    Array& operator=(const Array& copy)
    {
        unsigned int i;
        if(this != &copy)
        {
            if(_array)
                delete[] _array;
            _array = new T[copy._size];
            for(i = 0; i < copy._size ; i++)
                _array[i] = copy._array[i];
        }
        return *this;
    }

    T& operator[](unsigned int i){
        if (i >= _size)
            throw std::exception();
        return _array[i];
    }
    ~Array(){if (_array) delete[] _array;}
    int size() const {return this->_size;}
};