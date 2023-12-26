#pragma once
#include <iostream>


template <typename T> class Array
{
    private:
        T* array;
        unsigned int _size;
    public:
        Array(){ array = new T[0]; _size = 0; }

        Array(unsigned int n) { _size = n; array = new T[n]; }

        Array(Array & copy) : array(NULL), _size(copy._size) { *this = copy; }

        Array & operator=(Array & copy)
        {
            if (this != &copy)
            {
                if (array) delete[] array;
                array = new T[_size];
                for (unsigned int i = 0; i < _size; i++)
                    array[i] = copy.array[i];
            }
            return *this;
        }

        T & operator[](unsigned int index)
        {
            if (index >= _size || index < 0)
                throw std::exception();
            return array[index];
        }

        int size() const { return _size; }

        ~Array(){ if(array) delete[] array;}

};