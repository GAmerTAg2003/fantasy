#pragma once
#include<iostream>
#include"Team.h"
#include<vector>
using namespace std;

class Leagues {

private:
	string leagueName;
	int leagueId;
	int numOfTeams = 0;
	vector<Team> teams;


public:
	Leagues(string name, int ID);
	Leagues(string name, int ID, vector<Team> t);


	void addTeam(Team team);
	void deleteTeam(string teamName);

	string displayLeagueName();
	int getLeagueId();
	int getIndex(string teamName);
	int getNumOfTeams();






};