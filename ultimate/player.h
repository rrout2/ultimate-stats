#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class player
{
public:
    std::string name_;
    int ds_ = 0;
    int throwaways_ = 0;
    int assists_ = 0;
    int goals_ = 0;
    int completions_ = 0;
    int touches_ = 0;
    int catches_ = 0;
    int drops_ = 0;
    int recYards_ = 0;
    int throwYards_ = 0;
    player();
    player(std::string n) : name_(n) {};
};

#endif // PLAYER_H
