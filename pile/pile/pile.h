//
//  pile.h
//  pile
//
//  Created by Ludovic Doppler on 09/07/2022.
//

#ifndef pile_h
#define pile_h

/* Mes structures */
typedef struct Element Element;
struct Element{
    int nombre;
    Element *suivant;
};
typedef struct Pile Pile;
struct Pile{
    Element *premier;
};
/* Mes fonctions */

Pile *initialiser(){
    Element *element = malloc(sizeof(element));
    Pile *pile = malloc(sizeof(pile));
    
    if(element == NULL || pile == NULL){
        exit(EXIT_FAILURE);
    }
    element->suivant = NULL;
    element->nombre = 0;
    pile->premier = element;
    
    return pile;
}

void empiler(Pile *pile,int nvNombre){
    Element *nouveau = malloc(sizeof(nouveau));
    if(pile == NULL || nouveau == NULL){
        exit(EXIT_FAILURE);
    }
    
    nouveau->nombre = nvNombre;
    nouveau->suivant = pile->premier;
    pile->premier = nouveau;
    
}
int depiler(Pile *pile){
    if(pile == NULL){
        exit(EXIT_FAILURE);
    }
    int nombreDepile = 0;
    Element *elementDepile = pile->premier;
    
    if(pile != NULL && pile->premier != NULL){
        nombreDepile = elementDepile->nombre;
        pile->premier = elementDepile->suivant;
        free(elementDepile);
    }
    return nombreDepile;
}

void afficherPile(Pile *pile){
    if(pile == NULL){
        exit(EXIT_FAILURE);
    }
    Element *actuel = pile->premier;
    
    while (actuel != NULL) {
        printf("%d\n", actuel->nombre);
        actuel = actuel->suivant;
    }
    printf("\n");
} 
#endif /* pile_h */
