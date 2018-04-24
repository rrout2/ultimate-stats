#ifndef ROSTER_H
#define ROSTER_H
#include <vector>
#include <player.h>

class roster
{
public:
    roster();
    roster(roster &other);
    std::vector<player> team;
};

#endif // ROSTER_H
