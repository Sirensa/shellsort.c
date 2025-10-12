#include<stdio.h>
#include<stdlib.h>


void echanger(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void tridshell(int T[],int n){

    for (int vl = n/2; vl>0; vl=vl/2)
    {
        for (int j = vl ; j <n; j++)
        {
           for ( int i = j-vl;  i>=0 ;i= i-vl)
           {

            if (T[i]<T[i+vl])
            {
                break;

            }else


             echanger(&T[i],&T[i+vl]);
            
           }
           
        }
        
    }
    
}
void affichage (int T[],int n){
    for (int i = 0; i <n; i++)
    {
      printf ("%d ",T[i]);
    }
    
}


int main (){

    int n;



    printf ("Donner la taille de tableau :");
    scanf("%d",&n);


    int *T =(int*) malloc (n*sizeof(int));
    if (T==NULL)
    {
        printf ("La memoire n'est pas allouee");
        exit(0);
    }
    else
    
   
    printf ("Entrer les elements de tableau :\n");

    for (int  i = 0; i < n; i++)
    {
        printf ("L'elemetn 1 :",i+1);
        scanf("%d",&T[i]);
    }
     tridshell(T,n);
     printf ("\nLes elements de tableau apres le tri: \n");
     affichage(T,n);


    free(T);    










    return 0;
}