TEMPLATE = app
INCLUDEPATEH += .

HEADERS += \
    bookdelegate.h \
    bookwindow.h \
    initdb.h

QT += \
    sql \
    widgets

requires(qtConfig(tableview))

SOURCES += \
    bookdelegate.cpp \
    bookwindow.cpp \
    main.cpp

FORMS += \
    bookwindow.ui

RESOURCES += \
    books.qrc
