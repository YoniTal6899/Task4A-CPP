#include "Duke.hpp"

namespace coup
{
    Duke::Duke(Game &game, string name) : Player(game,name)
    {

    }
    void Duke::role()
    {
        cout<< "This is a Duke!"<<endl;
    }
    void Duke::block(Player &p1)
    {
        
    }
    void Duke::tax()
    {
        money+=3;
    }
}