#include "bookwindow.h"

#include <QtWidgets>

int main(int argc, char *argv[])
{
    Q_INIT_RESOURCE(books);
    QApplication app(argc, argv);
    BookWindow w;
    w.show();
    return app.exec();
}
