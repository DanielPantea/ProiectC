#include<stdio.h>
///this is how you include a file from the same project.
///the h file contains all the functions you want to include
#include "func.h"
#include "tania.h"
#include "alex.h"



int main() {

     int et , p, m[11][101],k,val;
      FILE *f = fopen("date.in", "r");
      printf ("Nr de etaje, nr de persoane de pe fiecare etaj si matricea cu taxele se vor citi din fisier");
      fscanf(f,"%d", &et);
      fscanf(f,"%d", &p);
     int i,j;
     for(i = 0; i<et; i++)
        for(j=0; j<p; j++)
        {

            fscanf(f,"%d", &m[i][j]);
        }
    int t,k;
    printf("Introduceti:\n tasta 1 pentru sortarea crescatoare a persoanelor de pe un etaj in functie de taxa\n");
    printf("tasta 2 pentru sortarea descrescatoare a persoanelor de pe un etaj in functie de taxa\n");
    printf("tasta 3 pentru aflarea mediei taxelor persoanelor de pe un etaj\n");
    printf("tasta 4 pentru afisarea persoanelor de pe un anumit etaj ce au de platit o suma mai mica decat suma data de la tastatura\n");
    printf("Introdu o tasta:");
    scanf("%d", &t);
    switch(t)
    {
        case 1:
            printf("Alegeti un etaj: ");
            scanf("%d",&k);
            sort_et_pret_cresc(m[k-1], p);
            break;
        case 2: break;
        case 3 :
            printf("Alegeti un etaj: ");
            scanf("%d",&k);
            float md = media_et(m[k-1], p);
            printf("%f", md);
            break;
        case 4 :
                printf("Alegeti un etaj si suma maxima : ");
                scanf("%d%d",&k &val);
                Valori_sub_max(m[k-1],p,val);
                break;
    }


}
