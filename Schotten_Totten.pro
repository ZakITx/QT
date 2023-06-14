QT += widgets

HEADERS += \
    Model/Board/Board.h \
    Model/Border/Border.h \
    Model/Card/Card.h \
    Model/Card/Clan/Clan.h \
    Model/Card/ViewCard.h \
    Model/Deck/ClanDeck/ClanDeck.h \
    Model/Deck/Deck.h \
    Model/Game/Game.h \
    Model/Player/Human/Human.h \
    Model/Player/Player.h \
    Utils/enums.h \
    chosegame.h \
    mainwindow.h \
    menu.h

SOURCES += \
    Model/Board/Board.cpp \
    Model/Border/Border.cpp \
    Model/Card/Card.cpp \
    Model/Card/Clan/Clan.cpp \
    Model/Card/ViewCard.cpp \
    Model/Deck/ClanDeck/ClanDeck.cpp \
    Model/Deck/Deck.cpp \
    Model/Game/Game.cpp \
    Model/Player/Human/Human.cpp \
    Model/Player/Player.cpp \
    QT.cpp \
    Utils/enums.cpp \
    chosegame.cpp \
    main.cpp \
    mainwindow.cpp \
    menu.cpp

DISTFILES += \
    CMakeLists.txt \
    images/16.png \
    images/schotten-teaseur.jpg

FORMS += \
    chosegame.ui \
    mainwindow.ui

