#include "Contessa.hpp"

namespace coup
{

    Contessa::Contessa(Game &game, string name) : Player(game,name)
    {

    }
    void Contessa::role()
    {
        cout<< "This is a Contessa!"<<endl;
    }
    void Contessa::block(Player &p1)
    {
        
    }    
}