#include <iostream>
#include "DungeonMaster.h"
#include "TrapRoom.h"
#include "TreasureRoom.h"
#include "EnemyRoom.h"

DungeonMaster::DungeonMaster(int rows, int columns) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1, 3);

    for (int i = 0; i < rows; ++i) {
        std::vector<Room*> row;
        for (int j = 0; j < columns; ++j) {
            int roomType = dist(gen);
            if (roomType == 1) {
                row.push_back(new TrapRoom());
            } else if (roomType == 2) {
                row.push_back(new TreasureRoom());
            } else {
                row.push_back(new EnemyRoom());
            }
        }
        dungeon.push_back(row);
    }
}

DungeonMaster::~DungeonMaster() {
    for (auto& row : dungeon) {
        for (Room* room : row) {
            delete room;
        }
    }
}

void DungeonMaster::printDungeon() {
    std::cout << "Карта подземелья:\n";
    for (const auto& row : dungeon) {
        for (Room* room : row) {
            room->printDescription();
        }
        std::cout << '\n';
    }
}

