#include"Player.hpp"

namespace coup
{
    class Duke : public Player
    {
    public:
        Duke(Game &game, string name);
        void block(Player &p1);
        void tax();
        void role();
    };
}