cmake_minimum_required(VERSION 3.24)
project(schotten_totten)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE Debug)

include_directories(.)
add_executable(schottent_totten main.cpp Model/Game/Game.cpp Model/Game/Game.h Utils/enums.cpp Utils/enums.h Model/Card/Card.cpp Model/Card/Card.h Model/Player/Player.cpp Model/Player/Player.h Model/Board/Board.cpp Model/Board/Board.h Model/Player/Human/Human.cpp Model/Player/Human/Human.h Model/Card/Clan/Clan.cpp Model/Card/Clan/Clan.h Model/Deck/Deck.cpp Model/Deck/Deck.h Model/Border/Border.cpp Model/Border/Border.h Model/Deck/ClanDeck/ClanDeck.cpp Model/Deck/ClanDeck/ClanDeck.h)

