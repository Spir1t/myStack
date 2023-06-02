#include "VectorStack.h"

VectorStack::VectorStack(const ValueType *values, const size_t size)
{
    _data.insert(_data.begin(), values, values + size);
}

void VectorStack::push(const ValueType& value)
{
    _data.push_back(value);
}

void VectorStack::pop()
{
    _data.pop_back();
}

const ValueType& VectorStack::top() const
{
    return(_data.back());
}

bool VectorStack::isEmpty() const
{
    return(_data.empty());
}

size_t VectorStack::size() const
{
    return(_data.size());
}