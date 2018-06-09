#ifndef MENUITERATOR_H
#define MENUITERATOR_H

#include "helpervisitor.h"

#include <memory>
#include <stack>

class AbstractMenuItem;

class MenuIterator
{
public:
    MenuIterator(AbstractMenuItem *menu);

    bool hasNext() const;
    AbstractMenuItem *next();

private:
    std::stack<AbstractMenuItem *> mItemsStack;
    std::unique_ptr<HelperVisitor> mChildrenVisitor;
};

#endif // MENUITERATOR_H
