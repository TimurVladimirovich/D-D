#ifndef ENEMYROOM_H
#define ENEMYROOM_H

#include "Room.h"

class EnemyRoom : public Room {
public:
    void printDescription() override;
};

#endif  // ENEMYROOM_H

