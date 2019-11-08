#include<stdio.h>
void sort_et_pret_cresc(int v[101],int n)
{
int s;
int i,aux;
 do{
        s = 0;
        for (i = 1; i < n; i++){
            if (v[i - 1] > v[i]){
                aux = v[i - 1];
                v[i - 1] = v[i];
                v[i] = aux;
                s = 1;
            }
        }
    } while (s);
    printf("Preturile ordonate crescatot pe etajul %d sunt \n", n);
    for(i=0;i<n;i++)
     printf("Persoana %d are taxa de %d lei \n",i,v[i]);

}
