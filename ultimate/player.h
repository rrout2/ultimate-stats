#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class player
{
private:

    int ds_;
    int throwaways_;
    int assists_;
    int goals_;
    int completions_;
    int touches_;
    int catches_;
    int drops_;
public:
    std::string name_;
    player();
    player(std::string n) : name_(n) {};
};

#endif // PLAYER_H
