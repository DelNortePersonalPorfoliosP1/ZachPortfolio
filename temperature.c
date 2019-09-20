//
//  temperature.c
//  Intro to CS Labs
//
//  Created by Sutherland, Zachary on 9/16/19.
//  Copyright © 2019 Sutherland, Zachary. All rights reserved.
//

#include "temperature.h"
#include <stdio.h>
#include <math.h>
int temperature(void) {
    // insert code here...
    double Temp1, Temp2, Temp3, Temp4 ;
    printf("Enter the first Fahrenheit temperature\n") ;
    scanf("%lf", &Temp1) ;
    printf("Enter the second Fahrenheit temperature\n") ;
    scanf("%lf", &Temp2) ;
    printf("Enter the third Fahrenheit temperature\n") ;
    scanf("%lf", &Temp3) ;
    printf("Enter the fourth Fahrenheit temperature\n") ;
    scanf("%lf", &Temp4) ;
    
    double celsius1,FtoFreeze1, celsius2,FtoFreeze2, celsius3, FtoFreeze3, celsius4,FtoFreeze4 ;
    
    celsius1 = (5*(Temp1-32))/9 ;
    FtoFreeze1 = Temp1 - 32 ;
    printf("Your first Fahrenheit Temperature is %lf.\n This is %lf in Celsius.\n Your Fahrenheit Temperature is %lf away from the Fahrenheit freezing point, and the Celsius equivalent is %lf away from the Celsius freezing point.                                                                                    \n", Temp1, celsius1, FtoFreeze1, celsius1) ;
    
    celsius2 = (5*(Temp2-32))/9 ;
    FtoFreeze2 = Temp2 - 32 ;
    printf("Your second Fahrenheit Temperature is %lf.\n This is %lf in Celsius.\n Your Fahrenheit Temperature is %lf away from the Fahrenheit freezing point, and the Celsius equivalent is %lf away from the Celsius freezing point.                                                                                    \n", Temp2, celsius2, FtoFreeze2, celsius2) ;
    
    celsius3 = (5*(Temp3-32))/9 ;
    FtoFreeze3 = Temp3 - 32 ;
    printf("Your third Fahrenheit Temperature is %lf.\n This is %lf in Celsius.\n Your Fahrenheit Temperature is %lf away from the Fahrenheit freezing point, and the Celsius equivalent is %lf away from the Celsius freezing point.                                                                                    \n", Temp1, celsius3, FtoFreeze3, celsius3) ;
    
    celsius4 = (5*(Temp4-32))/9 ;
    FtoFreeze4 = Temp4 - 32 ;
    printf("Your fourth Fahrenheit Temperature is %lf.\n This is %lf in Celsius.\n Your Fahrenheit Temperature is %lf away from the Fahrenheit freezing point, and the Celsius equivalent is %lf away from the Celsius freezing point.                                                                                    \n", Temp4, celsius4, FtoFreeze4, celsius4) ;
    
    return 0;
}



