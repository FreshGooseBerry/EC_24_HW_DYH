//
// Created by yixin on 2023/10/2.
//

#include "../Inc/main.h"
#include "../Inc/robot.h"

int main() {
    Competition RM;
    competitionInit(&RM);
    int time=0;
    while(time<=RM.totalTime){

    }
    return 0;
}

void blueTeamInit(Team* team){
    team->hero.basic.pos.x=3;
    team->hero.basic.pos.y=2;
    team->hero.basic.pos.yaw=0;
    team->hero.basic.pos.pitch=0;

    team->infantry1.basic.pos.x=3;
    team->infantry1.basic.pos.y=2;
    team->infantry1.basic.pos.yaw=0;
    team->infantry1.basic.pos.pitch=0;

    team->infantry2.basic.pos.x=3;
    team->infantry2.basic.pos.y=2;
    team->infantry2.basic.pos.yaw=0;
    team->infantry2.basic.pos.pitch=0;

    team->engineer.basic.pos.x=3;
    team->engineer.basic.pos.y=2;
    team->engineer.basic.pos.yaw=0;
    team->engineer.basic.pos.pitch=0;

    team->money=200;
}

void redTeamInit(Team* team){
    team->hero.basic.pos.x=8;
    team->hero.basic.pos.y=17;
    team->hero.basic.pos.yaw=0;
    team->hero.basic.pos.pitch=0;

    team->infantry1.basic.pos.x=8;
    team->infantry1.basic.pos.y=17;
    team->infantry1.basic.pos.yaw=0;
    team->infantry1.basic.pos.pitch=0;

    team->infantry2.basic.pos.x=8;
    team->infantry2.basic.pos.y=17;
    team->infantry2.basic.pos.yaw=0;
    team->infantry2.basic.pos.pitch=0;

    team->engineer.basic.pos.x=8;
    team->engineer.basic.pos.y=17;
    team->engineer.basic.pos.yaw=0;
    team->engineer.basic.pos.pitch=0;

    team->money=200;

    heroInit(&(team->hero));
    infantryInit(&(team->infantry1));
    infantryInit(&(team->infantry2));
    engineerInit(&(team->engineer));
}

void competitionInit(Competition* competition){
    competition->redScore=0;
    competition->blueScore=0;
    competition->totalTime=1200;
    redTeamInit(&(competition->redTeam));
    blueTeamInit(&(competition->blueTeam));
}
