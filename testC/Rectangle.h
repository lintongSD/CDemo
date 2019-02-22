//
//  Rectangle.h
//  testC
//
//  Created by EBIZM2 on 2019/2/18.
//  Copyright © 2019年 EBIZM2. All rights reserved.
//

#ifndef Rectangle_h
#define Rectangle_h

#include <stdio.h>
#include "Shape.h"

//Rectangle : Shape
struct Rectangle {
    struct Shape * shape;
    int width;
    int height;
};

struct Rectangle * Rectangle_create(int x, int y, int width, int height);
float Rectangle_area(struct Rectangle * self);

#endif /* Rectangle_h */
