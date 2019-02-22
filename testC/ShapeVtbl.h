//
//  ShapeVtbl.h
//  testC
//
//  Created by EBIZM2 on 2019/2/18.
//  Copyright © 2019年 EBIZM2. All rights reserved.
//

#ifndef ShapeVtbl_h
#define ShapeVtbl_h

#include <stdio.h>
#import "Shape.h"
struct ShapeVtbl{
    float (* area)(struct Shape * self);
    void (* draw)(struct Shape * self);
};


#endif /* ShapeVtbl_h */
