//
//  main.cpp
//  Home Work 20
//
//  Created by 何宗愷 on 2019/5/30.
//  Copyright © 2019 何宗愷. All rights reserved.
//

#include <stdio.h>

#include <stdlib.h>

struct phone

{
    char brand[16],type[10];
    int year,price;
};

int main(void)
{
    int num;
    printf("     iPhone手機結構體       \n");
    
    struct phone p[5]={
        
        "Apple", "iPhone Xs",2018, 35900,
        
        "Apple", "iPhone Xr",2018, 26900,
        
        "Apple", "iPhone 8", 2017, 21500,
        
        "Apple", "iPhone 7", 2016, 15900,
        
        "Apple", "iPhone 6s", 2016,13900
    };
    
    
    
    for (num=0; num<5; num++)
        
    {
        printf("%s %s %4d %5d\n", p[num].brand, p[num].type, p[num].year, p[num].price);
    }
     
    return 0;
    
}



