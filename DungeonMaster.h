#ifndef DUNGEONMASTER_H
#define DUNGEONMASTER_H

#include <vector>
#include "Room.h"

class DungeonMaster {
private:
    std::vector<std::vector<Room*>> dungeon;

public:
    DungeonMaster(int rows, int columns);
    ~DungeonMaster();
    void printDungeon();
};

#endif  // DUNGEONMASTER_H

