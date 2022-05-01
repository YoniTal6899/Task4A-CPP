#include "Captain.hpp"

namespace coup{

    Captain::Captain(Game &game, string name) : Player(game,name)
    {

    }
    void Captain::role()
    {
        cout<< "This is a Captain!"<<endl;
    }    
    void Captain::block(Player &p1)
    {

    }
    void Captain::steal(Player &p1)
    {
        if(p1.money>=2)
        {
            p1.money-=2;
            money+=2;
        }
    }       
}