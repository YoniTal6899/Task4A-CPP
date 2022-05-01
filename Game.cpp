#include "Game.hpp"

namespace coup
{
    Game::Game()
    {
        t = 0;
    }
    vector<string> Game::players()
    {
        vector<string> ans;
        for(Player *p1 : online)
        {
            ans.push_back(p1->name);
        }

        return ans;
    }
    string Game::turn()
    {
        return " ";
    }
    string Game::winner()
    {
        if (this->online.size() <= 0){throw runtime_error("There are no players!");}
        if (this->online.size() == 1){return online[t]->name;}
        return "there is no winner yet";
    }
    void Game::add_a_Player(Player *p1)
    {
        online.push_back(p1);
    }
}