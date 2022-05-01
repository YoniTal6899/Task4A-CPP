#include"Player.hpp"

using namespace std;

namespace coup
{
    class Captain : public Player
    {
    public:
        Captain(Game &game, string name);
        void block(Player &p1);
        void steal(Player &p1);
        void role();
    };
}