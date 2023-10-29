//
// Created by yixin on 2023/10/2.
//

#ifndef HW1_ROBOT_H
#define HW1_ROBOT_H

/* field
--------
|  R   |     // red base
|      |
|      |
|      |
|      |
|  B   |    // blue base
--------
*/


struct RobotPos{
    //设Pos点位于机器人几何中心
    float x;     // m   set down left as (0,0)
    float y;     // m
    float yaw;   // deg
    float pitch; // deg
};

RobotPos* moveRobot(RobotPos *pos, float dx, float dy);
RobotPos* rotateRobot(RobotPos* pos,float dyaw);

struct RobotHP{
    int hp;
    int max_hp;
};

RobotHP* reduceHP(RobotHP* hp_,int dhp);

struct Chassis{
    //长宽高
    float length;
    float width;
};//底盘参数

struct Gimbal{
    float yaw;      //deg
};//云台

struct Shoot{
    int heat;       //枪口热量
    int max_heat;
    float distance; //射击范围
    float frequency;
    int bullet;     //剩余子弹数
    int hurt;       //攻击力
};

struct Power{
    float power;    //W
    float max_power;
    float capacity; //J
};

struct Arm{

};

struct Robot{
    Chassis chassis;
    Gimbal gimbal;

    RobotPos pos;
    RobotHP hp;
    Power power;

    float speed;
    float max_speed;
};

struct Hero{
    Robot basic;
    Shoot shoot;
};

void heroInit(Hero* hero);

struct Infantry{
    Robot basic;
    Shoot shoot;
};

void infantryInit(Infantry* infantry);

struct Engineer{
    Robot basic;
    Arm arm;
};

void engineerInit(Engineer* engineer);


#endif //HW1_ROBOT_H
