//
// Created by ASUS on 2023/10/20.
//

#ifndef EC_24_HW_DYH_FIELD_H
#define EC_24_HW_DYH_FIELD_H

struct Field{
    float length;
    float width;

    struct Base{
        float x;
        float y;
        float length;
        float width;
    }redBase,blueBase;

    struct Ore{
        float x;
        float y;
        int num;
    }gold,sliver_r,sliver_b;
};

void fieldInit(Field* field);


#endif //EC_24_HW_DYH_FIELD_H
