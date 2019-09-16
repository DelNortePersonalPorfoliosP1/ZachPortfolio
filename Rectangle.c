//
//  Rectangle.c
//  Intro to CS Labs
//
//  Created by Sutherland, Zachary on 9/13/19.
//  Copyright © 2019 Sutherland, Zachary. All rights reserved.
//

#include "Rectangle.h"

void rectangle() {
    double width=0,length=0, perimeter=0, area=0;
    printf ("ask for width");
    scanf("%lf", &width);
    printf("Ask for length");
    scanf("%lf", &length);
    perimeter=(width + width)+(length + length);
    area=(width * length);
    printf("perimeter:");
    printf("%lf\n", perimeter);
    printf("area:");
    printf("%lf\n", area);

}
    


