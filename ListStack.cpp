#include "ListStack.h"

ListStack::ListStack(const ValueType *values, const size_t size)
{
    _data.insert(_data.begin(), values, values + size);
}

void ListStack::push(const ValueType &value)
{
    _data.push_back(value);
}

void ListStack::pop()
{
    _data.pop_back();
}

const ValueType &ListStack::top() const
{
    return(_data.back());
}

bool ListStack::isEmpty() const
{
    return(_data.empty());
}

size_t ListStack::size() const
{
    return(_data.size());
}