#include <stdio.h>
#include<stdlib.h>
int main(){
    int m ,n,j,k;
    printf("enter first matrix dimension");
    scanf ("%d %d",&m,&n);
    printf("enter second matrix dimension");
    scanf ("%d %d",&j,&k);
    if (j!=n){printf ("this multiplication is invalid");return 0;}
    int** m1=(int**)malloc(sizeof(int)*m);
    int **m2=(int**)malloc(sizeof(int)*j);
    for(int r=0;r<m;r++){m1[r]=(int*)malloc(sizeof(int)*n);}
     for(int r=0;r<m;r++){m2[r]=(int*)malloc(sizeof(int)*k);}
     int ** result=(int**)malloc(sizeof(int)*m);
      for(int r=0;r<m;r++){result[r]=(int*)malloc(sizeof(int)*k);}
      for (int a=0;a<m;a++){for (int b=0;b<n;b++){printf("enter the element[%d][%d]of first matrix\n",a,b);
    scanf("%d",&m1[a][b]);}}
    for (int a=0;a<j;a++){for (int b=0;b<k;b++){printf("enter the element[%d][%d]of second matrix\n",a,b);
    scanf("%d",&m2[a][b]);}}
      for (int a=0;a<m;a++){
        for (int b=0;b<k;b++){
            result[a][b]=0;
            for(int c=0;c<n;c++){result[a][b]+=m1[a][c]*m2[c][b];}  }  }
        for (int a=0;a<m;a++){for (int b=0;b<k;b++){printf("the element [%d][%d] of the result matrix is %d\n",a,b,result[a][b]);}}
    free(m1);
free(m2);
free(result);}