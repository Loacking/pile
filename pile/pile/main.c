//
//  main.c
//  pile
//
//  Created by Ludovic Doppler on 09/07/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include "pile.h"

int main(int argc, const char * argv[]) {
    Pile *maPile = initialiser();
    
    empiler(maPile, 4);
    empiler(maPile, 8);
    empiler(maPile, 15);
    empiler(maPile, 16);
    empiler(maPile, 23);
    empiler(maPile, 42);

    printf("\nEtat de la pile :\n");
    afficherPile(maPile);

    printf("Je depile %d\n", depiler(maPile));
    printf("Je depile %d\n", depiler(maPile));

    printf("\nEtat de la pile :\n");
    afficherPile(maPile);
    return 0;
}
