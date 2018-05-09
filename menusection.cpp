#include "menusection.h"

MenuSection::MenuSection(const std::string &name)
    : AbstractMenuItem{name}
{

}

MenuSection::~MenuSection()
{

}

void MenuSection::addItem(std::unique_ptr<AbstractMenuItem> item)
{
    mSubItems.push_back(std::move(item));
}
