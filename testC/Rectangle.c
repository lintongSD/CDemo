//
//  Rectangle.c
//  testC
//
//  Created by EBIZM2 on 2019/2/18.
//  Copyright © 2019年 EBIZM2. All rights reserved.
//

#include "Rectangle.h"

struct Rectangle * Rectangle_create(int x, int y, int width, int height) {
    struct Rectangle * r = malloc(sizeof(struct Rectangle));
    Shape_init((struct Shape *)r, x, y);
    r -> width = width;
    r -> height = height;
    return r;
}

float Rectangle_area(struct Rectangle * self) {
    struct Rectangle * r = (struct Rectangle *)self;
    return r -> width * r -> height;
}
