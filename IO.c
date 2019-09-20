//
//  IO.c
//  Intro to CS Labs
//
//  Created by Sutherland, Zachary on 9/16/19.
//  Copyright © 2019 Sutherland, Zachary. All rights reserved.
//

#include "IO.h"
#include <stdio.h>
#include <limits.h>

int IO() {
    
    printf("The minimum value of INT = %d\n", INT_MIN);
    printf("The maximum value of INT = %d\n", INT_MAX);
    
    printf("The minimum value of CHAR = %d\n", CHAR_MIN);
    printf("The maximum value of CHAR = %d\n", CHAR_MAX);
    
    printf("The minimum value of LONG = %ld\n", LONG_MIN);
    printf("The maximum value of LONG = %ld\n", LONG_MAX);
    
    printf("The maximum value of ULONG = %ld\n", ULONG_MAX);
    
    printf("The maximum value of UINT = %u\n", UINT_MAX);
    
    return(0);
}

