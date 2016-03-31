//
//  main.c
//  Assignment 1
//
//  Created by Matthew Bell on 2016-03-29.
//  Copyright © 2016 Bell Boy Studios. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    for (int i = 0; i <= 100; i++) {
        
        if (i % 3 == 0){
        
            printf("%s", "Fizz");
            
            if (i % 5 == 0){
            
                printf("%s", "Buzz");
            
            }
            
        }
        
        printf("%d", i);
        
        
    }
    
};
