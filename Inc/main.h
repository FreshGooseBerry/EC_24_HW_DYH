//
// Created by yixin on 2023/10/2.
//

#ifndef HW2024_MAIN_H
#define HW2024_MAIN_H

#include "robot.h"
#include "field.h"

struct Team{
    Hero hero;
    Infantry infantry1,infantry2;
    Engineer engineer;
    int money;
};

void teamInit(Team* team);

struct Competition{
    Team redTeam,blueTeam;
    Field field;
    int redScore,blueScore;
    int totalTime;          //秒
};

void competitionInit(Competition* competition);

#endif //HW2024_MAIN_H
