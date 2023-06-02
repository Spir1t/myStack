#pragma once

#include <vector>
#include "StackImplementation.h"

class VectorStack: public IStackImplementation
{
public:
    VectorStack() = default;

    VectorStack(const ValueType *values, const size_t size);

    void push(const ValueType& value);

    void pop();

    const ValueType& top() const;

    bool isEmpty() const;

    size_t size() const;

private:
    std::vector<ValueType> _data;
};