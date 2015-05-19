
#include <iostream>
#include <string>

using namespace std;

#ifndef PLAYER_H_
#define PLAYER_H_



class Player {
	string name;
	int score;
public:
	Player(string name);
	string getName();
	int getScore();
	void incrementScore();
	void decrementScore();
};

#endif