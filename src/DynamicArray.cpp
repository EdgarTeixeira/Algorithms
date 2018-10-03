#include "DynamicArray.hpp"
#include <stdexcept>


template<typename T>
DynamicArray<T>::DynamicArray() noexcept:
    capacity_(0U),
    size_(0U),
    buffer_(nullptr)
{
}

template<typename T>
DynamicArray<T>::DynamicArray(std::size_t initialCapacity):
    capacity_(initialCapacity),
    size_(0U),
    buffer_(new T[initalCapacity])
{
}

template<typename T>
DynamicArray<T>::DynamicArray(std::initializer_list<T> initialValues):
    capacity_(initialValues.size()),
    size_(initialValues.size()),
    buffer_(new T[initialValues.size()])
{
    std::size_t i = 0U;
    for(auto&& value : initialValues)
        this->buffer_[i++] = value;
}

template<typename T>
DynamicArray<T>::~DynamicArray()
{
    delete[] this->buffer_;
}

template<typename T>
std::size_t DynamicArray<T>::size() const noexcept
{
    return this->size_;
}

template<typename T>
std::size_t DynamicArray<T>::capacity() const noexcept
{
    return this->capacity_;
}

template<typename T>
const T& DynamicArray<T>::operator[](std::size_t index) const {
    return this->buffer_[index];
}

template<typename T>
const T& DynamicArray<T>::at(std::size_t index) const {
    if (index >= size_)
        throw std::out_of_range("index");
    return this->buffer_[index];
}

template<typename T>
void DynamicArray<T>::push_back(T value)
{

}

template<typename T>
void DynamicArray<T>::push_front(T value)
{

}

template<typename T>
void DynamicArray<T>::pop_back()
{

}

template<typename T>
void DynamicArray<T>::pop_front()
{

}

template<typename T>
void DynamicArray<T>::begin()
{

}

template<typename T>
void DynamicArray<T>::end()
{

}
