
#include "admin.h"
#include<iostream>


admin::admin(string set_admin, string set_password){
	//user_name(set_username),password(set_pass)
	set_pass("admin");
	set_user("admin");
}



void admin::add_team(std::vector<Team>& teams,Team team_to_be_added){

	teams.push_back(team_to_be_added);

}

void admin::add_league(string name , int id){
	
	Leagues l(name, id);
	leagues.push_back(l);
}


void admin::update(Team teams,int pl_id){
	
	
}