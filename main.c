#include<stdio.h>
///this is how you include a file from the same project.
///the h file contains all the functions you want to include
#include "func.h"
#include "tania.h"
#include "alex.h"



int main() {

     int et , p, m[11][101],k,val;
     printf("Introduceti numarul de etaje: "); scanf("%d", &et);
     printf("Introduceti numarul de persoane pe etaj: "); scanf("%d", &p);
     int i,j;
     for(i = 0; i<et; i++)
        for(j=0; j<p; j++)
        {
            printf("Introduceti taxa persoaiei %d de pe etajul %d: ", j+1, i+1);
            scanf("%d", &m[i][j]);
        }
    int t,k;
    printf("Introduceti:\n tasta 1 pentru sortarea crescatoare a persoanelor de pe un etaj in functie de taxa\n");
    printf("tasta 2 pentru sortarea descrescatoare a persoanelor de pe un etaj in functie de taxa\n");
    printf("tasta 3 pentru aflarea mediei taxelor persoanelor de pe un etaj\n");
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
