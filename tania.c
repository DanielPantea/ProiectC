#include<stdio.h>

float media_et(int m[101], int p)
{
    int i;
    float md=0;
    for(i=0; i<p; i++)
        md=md+m[i];

    return md/p;

}

float max_et(int m[11][101],int p,int et)
{

    int i,k;
    float maxi=0;
    for(i=0; i<et; i++)
    {
        int sumet=0, j;
        for(j=0; j<p; j++)
            sumet=sumet+m[i][j];

        if (sumet>maxi) {maxi=sumet;k=i;}
    }

    return k;

}


