#ifndef ABSTRACTMENUITEM_H
#define ABSTRACTMENUITEM_H

#include <string>

/*!
 * \brief The AbstractMenuItem class.
 * base class for all menu items in the application.
 */
class AbstractMenuItem
{
public:
    AbstractMenuItem(const std::string &name);
    virtual ~AbstractMenuItem() =0;

    std::string name() const;

private:
    std::string mName;
};

#endif // ABSTRACTMENUITEM_H
