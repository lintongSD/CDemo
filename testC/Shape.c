//
//  Shape.c
//  testC
//
//  Created by EBIZM2 on 2019/2/15.
//  Copyright © 2019年 EBIZM2. All rights reserved.
//

#include "Shape.h"
#import "ShapeVtbl.h"

struct Shape {
    struct ShapeVtbl *vptbl;
    int x;
    int y;
};

struct Shape * Shape_create(int x, int y) {
    struct Shape * s = malloc(sizeof(struct Shape));
    s -> x = x;
    s -> y = y;
    return s;
}
void Shape_init(struct Shape *self, int x, int y) {
    self -> x = x;
    self -> y = y;
}

void Shape_move(struct Shape *self, int dx, int dy) {
    self -> x += dx;
    self -> y += dy;
}


//多态
float Shape_area(struct Shape * self) {
    return (*self -> vptbl -> area)(self);
}
