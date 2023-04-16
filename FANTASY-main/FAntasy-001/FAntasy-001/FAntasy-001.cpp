// FAntasy-001.cpp : This file contains the 'main' function. Program execution begins and ends there.
//offa7
//ggeasy
//SIUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU
#include"admin.h"
#include"user.h"
using namespace std;

int main()
{  
    
    vector<Team>t;
    Team a;
    admin ad("s","s");
    ad.add_team(t, a);
    cout << t[0].team_name << endl;


    player p("ali");
    p.player_id = 11;
    p.price = 11;
    map<int,player>map_players;
    map_players[11] = p;
    user u1("tarek","123");
    u1.ADD_player(map_players, 11, 0);
    cout << u1.players[0].pl_name << endl;



    ad.add_league("la_liga", 1);
    cout << ad.leagues[0].displayLeagueName() << endl;


}

