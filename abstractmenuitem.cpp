#include "abstractmenuitem.h"

/*!
 * \brief AbstractMenuItem constructor.
 * \param name Name of menu item.
 */
AbstractMenuItem::AbstractMenuItem(const std::string &name)
    : mName{name} {}

AbstractMenuItem::~AbstractMenuItem() {}

/*!
 * \brief Getter for menu item name.
 * \return Returns name of menu item.
 */
std::string AbstractMenuItem::name() const
{
    return mName;
}
