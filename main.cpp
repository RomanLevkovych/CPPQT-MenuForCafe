<<<<<<< HEAD
#include <iostream>
#include "abstractmenuitem.h"
#include "menuitem.h"
#include "menusection.h"

#include <memory>
#include <utility>

int main()
{
=======
#include <QApplication>
#include "mainwindow.h"
//#include <iostream>
//#include "abstractmenuitem.h"
//#include "menuitem.h"
//#include "menusection.h"

//#include <memory>
//#include <utility>

int main(int argc, char** argv)
{
    /*
>>>>>>> d580f1c... Moved project to my github account. Implemented start UI page, and core part for the printing menu in the console.
    auto drinks = std::make_unique<MenuSection>("drinks");
    drinks->addItem(std::make_unique<MenuItem>("Beer", 0.0));
    drinks->addItem(std::make_unique<MenuItem>("water", 0.0));

    auto food = std::make_unique<MenuSection>("food");
    food->addItem(std::make_unique<MenuItem>("potatoFree", 0.0));
    food->addItem(std::make_unique<MenuItem>("borshch", 0.0));

    MenuSection menu("MENU");
    menu.addItem(std::move(drinks));
    menu.addItem(std::move(food));
<<<<<<< HEAD
=======
    */
    QApplication app(argc, argv);
    MainWindow mainwindow;
    mainwindow.show();
    return app.exec();

>>>>>>> d580f1c... Moved project to my github account. Implemented start UI page, and core part for the printing menu in the console.
}
