#include "Player.hpp"

namespace coup
{
    class Game;        
    Player::Player(Game &game , string name)
    {
        this->game = &game;
        this->name = name;
        this->money = 0;
    }
    void Player:: income()
    {
        this->money++;
    }
    void Player::foreign_aid()
    {
        this->money+=2;
    }
    void Player::coup(Player &p1)
    {
        cout<<p1.name<<" is out!"<<endl;
    }
    void Player::role()
    {
        cout<<"your player is:"<<endl;
    }
    int Player::coins()
    {
        return this->money;
    }
}