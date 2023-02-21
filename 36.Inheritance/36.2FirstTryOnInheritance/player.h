#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#include "person.h"
#include <string_view>

class Player : public Person
{
    friend std::ostream& operator<<(std::ostream& out, const Player& player);
public:
    Player() = default;
    Player(std::string_view game_param);
    
private : 
    std::string m_game{"None"};
};

#endif // PLAYER_H