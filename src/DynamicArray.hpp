#ifndef __DYNAMIC_ARRAY_HPP__
#define __DYNAMIC_ARRAY_HPP__
#include <cstddef>
#include <initializer_list>


template<typename T>
class DynamicArray
{
    private:
        T* buffer_;
        std::size_t size_;
        std::size_t capacity_;

    public:
        DynamicArray() noexcept;
        DynamicArray(std::size_t);
        DynamicArray(std::initializer_list<T>);
        ~DynamicArray();

        DynamicArray(const DynamicArray&) = default;
        DynamicArray& operator=(const DynamicArray&) = default;

        DynamicArray(DynamicArray&&) = default;
        DynamicArray& operator=(DynamicArray&&) = default;

        std::size_t size() const noexcept;
        std::size_t capacity() const noexcept;

        const T& operator[](std::size_t) const;
        const T& at(std::size_t) const;

        void push_back(T value);
        void push_front(T value);
        void pop_back();
        void pop_front();

        void begin();
        void end();
};


#endif // __DYNAMIC_ARRAY_HPP__
