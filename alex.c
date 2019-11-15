#include<stdio.h>
void sort_et_pret_cresc(int v[101],int n)
{
    int s;
    int i,aux;
    do
    {
        s = 0;
        for (i = 1; i < n; i++)
        {
            if (v[i - 1] > v[i])
            {
                aux = v[i - 1];
                v[i - 1] = v[i];
                v[i] = aux;
                s = 1;
            }
        }
    }
    while (s);
    printf("Preturile ordonate crescatot pe etajul %d sunt \n", n);
    for(i=0; i<n; i++)
        printf("Persoana %d are taxa de %d lei \n",i,v[i]);

}

void Valori_sub_max(int v[101],int n,int val)
{
    printf("Persoanele care au de platit o suma mai mica decat %d sunt :", val );
    for(int i=1 ; i<n; i++)
        if(v[i]< val)
            printf("%d",i);

}

void Matrice_in_vector(int a[11][101],int v[1111],int val,int m,int n)
{
    printf("Afisarea tuturor persoanelor care au de platit o suma mai mica decat cea data");
    int k=0,i,j;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            if(a[i][j]<val)
            {
                v[k]=a[i][j];
                k++;
            }

    }
    for(i=0;i<k;i++)
    printf("%d",v[i]);
}
