//
//  Shape.h
//  testC
//
//  Created by EBIZM2 on 2019/2/15.
//  Copyright © 2019年 EBIZM2. All rights reserved.
//

#ifndef Shape_h
#define Shape_h

#include <stdio.h>

//struct Shape;
struct Shape * Shape_create(int x, int y);

//封装
void Shape_move(struct Shape *self, int dx, int dy);
void Shape_init(struct Shape *self, int x, int y);
//多态
float Shape_area(struct Shape * self);


#endif /* Shape_h */
