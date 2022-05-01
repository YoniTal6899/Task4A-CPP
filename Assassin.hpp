#include"Player.hpp"

namespace coup
{
    class Assassin : public Player
    {
    public:
        Assassin(Game &game, string name);
        void kill(Player &p1);
        void role();
    };
}