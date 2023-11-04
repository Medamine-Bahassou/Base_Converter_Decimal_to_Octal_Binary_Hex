#include <stdio.h>
#include <stdlib.h>

int main()
{


    int d  , b , i , j , f;
    int *tab ;
    E : {
    f=1;

    printf("***** WELCOME *****\n\n");
    tab = (int*)malloc(sizeof(int));
    printf("DECIMAL = ");
    scanf("%d",&d) ;
    e:{
    printf("BASE = ");
    scanf("%d",&b) ;
    }
    if(b != 2 && b != 8 && b != 16){
        printf("base incorrect ! \n");
        goto e;
    }
    printf("base correct \n");
    printf("\n");
    i=0;
    for(i=0;d!=0 ;i++)
    {
        tab[i] = d % b ;
        d = (int) d/b ;


    }

    // B MAINTENANT C EST LE NOMBRE DE NUM

    b=i;


    int tb[b];

 /* AVANT REVERSE ET AVANT CHANGER LES NOMBRE DE L HEXADICIMAL EN CARACTERE
    for(i=0;i<b;i++){
        printf("%d ",tab[i]);
    } */
    j=0; // APPRES REVERSE
    printf("\n");

    for(i=b-1;i>=0;i--){
        tb[j]=tab[i];
        j++;
    }
    printf("\n"); // pas de fonction necessaire

     for(i=0;i<b;i++){
            // c est la methode plus EFFICACE
           for(i=0;i<b;i++){
        if(tb[i]>9){
            printf("%c ",(char)(tb[i]+55) ); //A=65->F=70
        }
        else{
            printf("%d ",tb[i]);
        }
    }

    }

    printf("\n\nif you want to try again print 1, CLICK anything to exit : ");
    scanf("%d",&f);
    printf("\n\n");
}
    if(f==1 || f == ' ' ){
        goto E ;
    }
    else
        exit(0);

    return 0;
}

