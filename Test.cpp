#include "doctest.h"
#include<iostream>
#include<string>
#include<vector>
#include <stdexcept>
#include "Game.hpp"
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"

using namespace std;
using namespace coup;

TEST_CASE("RUN")
{
    Game g1{};	
	Contessa contessa{g1, "Cont"};
	Assassin assassin{g1, "Asi"};
	Duke duke{g1, "Duki"};
	Captain captain{g1, "Capt"};
	Ambassador ambassador{g1, "Ambi"};	
	vector<string> players = g1.players();
    CHECK_EQ(contessa.coins(),0);
    CHECK_EQ(duke.coins(),0);
    CHECK_EQ(ambassador.coins(),0);
    CHECK_EQ(captain.coins(),0);
    CHECK_EQ(ambassador.coins(),0);    
    CHECK_NOTHROW(duke.income());
	CHECK_NOTHROW(assassin.income());
	CHECK_NOTHROW(ambassador.income());
	CHECK_NOTHROW(captain.income());
	CHECK_NOTHROW(contessa.income());
    CHECK_EQ(duke.coins(),1);
    CHECK_EQ(ambassador.coins(),1);
    CHECK_EQ(ambassador.coins(),1);
    CHECK_EQ(captain.coins(),1);
    CHECK_EQ(contessa.coins(),1);   
    CHECK_NOTHROW(duke.income());
	CHECK_NOTHROW(assassin.income());
	CHECK_NOTHROW(ambassador.income());
	CHECK_NOTHROW(captain.income());
	CHECK_NOTHROW(contessa.income());  
}