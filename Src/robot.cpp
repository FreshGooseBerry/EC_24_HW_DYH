//
// Created by yixin on 2023/10/2.
//

#include "../Inc/robot.h"

//RobotPosition
RobotPos* moveRobot(RobotPos *pos, float dx, float dy){
    pos->x = pos->x + dx;
    pos->y = pos->y + dy;
    return pos;
}

RobotPos* rotateRobot(RobotPos* pos,float dyaw){
    pos->yaw += dyaw;
    return pos;
}

//RobotHP
RobotHP* reduceHP(RobotHP* hp_,int dhp){
    hp_->hp -= dhp;
    return hp_;
}

//Hero
void heroInit(Hero* hero){
    hero->basic.hp.max_hp=200;
    hero->basic.hp.hp= hero->basic.hp.max_hp;

    hero->basic.chassis.length=0.5; //米
    hero->basic.chassis.width=0.3;

    hero->basic.gimbal.yaw=0;

    hero->basic.power.max_power=600;
    hero->basic.power.power=0;

    hero->basic.speed=0;
    hero->basic.max_speed=0;

    hero->shoot.hurt=100;
    hero->shoot.heat=0;
    hero->shoot.max_heat=300;
    hero->shoot.bullet=0;
    hero->shoot.distance=10;
    hero->shoot.frequency=1;
}

void infantryInit(Infantry* infantry){
    infantry->basic.hp.max_hp=200;
    infantry->basic.hp.hp= infantry->basic.hp.max_hp;

    infantry->basic.chassis.length=0.5; //米
    infantry->basic.chassis.width=0.3;

    infantry->basic.gimbal.yaw=0;

    //pos等field做好
    infantry->basic.pos;

    infantry->basic.power.max_power=600;
    infantry->basic.power.power=0;

    infantry->basic.speed=0;
    infantry->basic.max_speed=0;

    infantry->shoot.hurt=100;
    infantry->shoot.heat=0;
    infantry->shoot.max_heat=300;
    infantry->shoot.bullet=0;
    infantry->shoot.distance=10;
    infantry->shoot.frequency=1;
}

void engineerInit(Engineer* engineer){
    engineer->basic.hp.max_hp=200;
    engineer->basic.hp.hp= engineer->basic.hp.max_hp;

    engineer->basic.chassis.length=0.5; //米
    engineer->basic.chassis.width=0.3;

    engineer->basic.gimbal.yaw=0;

    //pos等field做好
    engineer->basic.pos;

    engineer->basic.power.max_power=600;
    engineer->basic.power.power=0;

    engineer->basic.speed=0;
    engineer->basic.max_speed=0;

    //arm未做好
    engineer->arm;
}