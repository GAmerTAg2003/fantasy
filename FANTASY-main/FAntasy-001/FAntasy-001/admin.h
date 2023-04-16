#pragma once
#ifndef ADMIN_H
#define ADMIN_H
#include<vector>
#include"league.h"
class admin 
{	
	private:
	string user_name ="admin";
	string password = "admin";


	public:

		vector<Leagues>leagues;
		void add_league(string league_name, int id);
		admin(string set_admin,string set_pass);
		void add_team(std::vector<Team>& teams,Team new_team);
		int gw_num = 0;//game week counter
		void update(Team,int);

	std::string get_user_name() const {
		return user_name;
	}

	std::string get_password() const {
		return password;
	}
	void set_user(string user) 
	
	{
		user_name = user;
	}




	void set_pass(string pass){
		password=pass;
	}

};

#endif