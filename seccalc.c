//
//  sec calc.c
//  Intro to CS Labs
//
//  Created by Sutherland, Zachary on 9/16/19.
//  Copyright © 2019 Sutherland, Zachary. All rights reserved.
//

int seccalc(void) {
    double seconds=0, minutes=0, hours=0, days=0;
    printf("Ask for seconds");
    scanf("%lf", &seconds);
    puts("minutes");
    (minutes)=(seconds/60);
    printf("%lf\n", minutes);
    return 0;
}
