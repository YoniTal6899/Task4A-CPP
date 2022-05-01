#include "Assassin.hpp"

namespace coup{
    
    Assassin::Assassin(Game &game, string name) : Player(game,name)
    {

    }
    void role()
    {
        cout<< "This is an Assassin!"<<endl;
    }
    void kill(Player &p1)
    {

    }   
}