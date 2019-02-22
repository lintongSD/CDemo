//
//  main.c
//  testC
//
//  Created by EBIZM2 on 2019/2/15.
//  Copyright © 2019年 EBIZM2. All rights reserved.
//

#include <stdio.h>
#include "Shape.h"
#include "Rectangle.h"
int main(int argc, const char * argv[]) {
    //封装
    struct Shape * s = Shape_create(0, 0);
    Shape_move(s, 10, 10);
    
    //继承
    struct Rectangle *r = Rectangle_create(10, 100, 300, 200);
    Shape_move((struct Shape *)r, 30, 40);
    
    //多态
    //还是有问题
    Shape_area((struct Shape *)r);

    
    return 0;
}
