//
//  main.c
//  Intro to CS Labs
//
//  Created by Sutherland, Zachary on 9/10/19.
//  Copyright © 2019 Sutherland, Zachary. All rights reserved.
//

#include "Rectangle.h"
#include "Pythagorean.h"
#include "IO.h"
//#include "seccalc.h"
int seccalc(void);

#include "temperature.h"

int main(void) {
    
    int lab;
    int a = 1;
    int b;
    int l = 1;
    
    while (a==1){
        
        
        printf("choose lab by typing in a number 1-5");
        scanf("%i",&lab);
        
        if (lab == 1){
            pythagorean();
        }
        if (lab == 2){
            rectangle();
        }
    
    }
}

