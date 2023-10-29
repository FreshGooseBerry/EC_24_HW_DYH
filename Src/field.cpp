//
// Created by ASUS on 2023/10/20.
//

#include "../Inc/field.h"

void fieldInit(Field* field){
    field->length=20;
    field->width=10;

    field->redBase.length=1;
    field->redBase.width=1;
    field->blueBase.length=1;
    field->blueBase.width=1;
    field->redBase.x=5;
    field->redBase.y=3;
    field->blueBase.x=5;
    field->blueBase.y=17;

    field->gold.x=5;
    field->gold.y=10;
    field->gold.num=5;

    field->sliver_r.x=2;
    field->sliver_r.y=16;
    field->sliver_r.num=5;

    field->sliver_b.x=13;
    field->sliver_b.y=4;
    field->sliver_b.num=5;
}