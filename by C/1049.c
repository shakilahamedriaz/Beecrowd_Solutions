
#include<stdio.h>
int main(){

 double x,y,z;
 scanf("%lf%lf%lf",&x,&y,&z);

 if(x==vertebrado && y==ave && z==carnivoro){

        printf("aguia\n");
    }
else if((x==vertebrado) && (y==ave) && (z==onivoro)){

    printf("pomba\n");
}
else if((x==vertebrado) && (y==mamifero) && (z==onivoro)){

    printf("homem\n");
}
else if((x==vertebrado) && (y==mamifero) && (z==herbivoro)){

    printf("vaca\n");
}
else if((x==invertebrado) && (y==inseto) && (z==hematofago)){

    printf("pulga\n");
}
else if((x==invertebrado) && (y==inseto) && (z==herbivoro)){

    printf("lagarta\n");
}
else if((x==invertebrado) && (y==anelideo) && (z==hematofago)){

    printf("sanguessuga\n");
}
else if((x==invertebrado) && (y==anelideo) && (z==onivoro)){

    printf("minhoca\n");
}


    return 0;
}
