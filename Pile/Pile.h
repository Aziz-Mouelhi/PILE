#ifndef PILE_H_INCLUDED
#define PILE_H_INCLUDED
#define LongMax 100 /* longueur maximale d'une pile */

typedef struct {
int sommet;
int taille;
int pile[LongMax];
}mypile*Mypile;

int estvide(mypile p)
{
    return p.sommet==0;
}
void empiloler(mypile *p , int value)
{
    p->sommet++;
    p->pile[p->sommet]= value;
}

#endif // PILE_H_INCLUDED
