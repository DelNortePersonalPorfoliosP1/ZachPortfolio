//
//  main.c
//  Intro to CS Labs
//
//  Created by Sutherland, Zachary on 9/10/19.
//  Copyright © 2019 Sutherland, Zachary. All rights reserved.
//

#include "Rectangle.h"
#include "Pythagorean.h"
#include "seccalc.h"


int main(void) {
    
    int lab;
    int a = 1;
    
    while (a<6){
        
        
        printf("choose lab by typing in a number 1-5 or type 6 to exit");
        scanf("%i",&lab);
        
        if (lab == 1){
            pythagorean();
        }
        if (lab == 2){
            rectangle();
        }
        if (lab == 3){
            seccalc();
        }
        if (lab == 4){
            temperature();
        }
        if (lab == 5){
            IO();
            
        }
        if (lab == 6){
            return 19;
        }
        
    
    }
}

