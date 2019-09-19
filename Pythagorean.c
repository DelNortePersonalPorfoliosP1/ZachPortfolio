//
//  Pythagorean.c
//  Intro to CS Labs
//
//  Created by Sutherland, Zachary on 9/10/19.
//  Copyright © 2019 Sutherland, Zachary. All rights reserved.
//

#include "Pythagorean.h"

int pythagorean(void) {
    double xvalue=0,yvalue=0,zvalue=0;
    printf ("ask for xvalue");
    scanf("%lf", &xvalue);
    printf("Ask for yvalue");
    scanf("%lf", &yvalue);
    zvalue=(xvalue * xvalue)+(yvalue * yvalue);
    zvalue=sqrt(zvalue);
    printf("%lf\n", zvalue);
    
}
