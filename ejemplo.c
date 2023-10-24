#include <stdio.h>
#include <unistd.h>

int main(){

/*Obtenemos el nombre del tamagoshi*/
char name[20];
printf("Hola papu ingresa el nombre a tu tamagochi: ");
scanf("%s", name);

/*Hacemos el menu inicial*/
int energy = 100, eat = 100;
int option, subOption;
int salir = 1;

do{
printf("\033[2J");
printf("\n(1) Jugar\n(2) Comer\n(3) Dormir\n(4) Ver estado\n(5) Salir\n");
scanf("%d", &option);

switch(option){
    
    case 1:
        printf("\033[2J");
        printf("(1) Jugar al parque\n(2) Jugar con juguete\n(3) No jugar\nIngrese un valor: ");
        scanf("%d", &subOption);

        switch(subOption){

            case 1:
                energy = energy - 15;
                eat = eat - 10;
            break;

            case 2:
                energy = energy - 10;
                eat = eat - 5;
            break;
                
            case 3:
                printf("\033[2J");
            break;

            default:
                    printf("Seleciona una opcion del 1-3");
            break;

        }

    break;

    case 2:
        printf("\033[2J");
        printf("(1) Comer fruta\n(2) Comer comida rapida\n(3) No comer\nIngrese un valor: ");
        scanf("%d", &subOption);

        switch(subOption){

            case 1:
                if(eat < 100){
                    eat = eat + 10;
                    if(eat >= 100){
                        eat = 100;
                    }
                }else{
                    eat = 100;
                }
                
            break;

            case 2:
                if(eat < 100){
                    eat = eat + 15;
                    if(eat >= 100){
                        eat = 100;
                    }
                }else{
                    eat = 100;
                }
            break;

            case 3:
            printf("\033[2J");
            break;

            default:
                    printf("Seleciona una opcion del 1-3");
            break;

        }     
    break;

    case 3:
        printf("\033[2J");
        printf("(1) Dormir una siesta\n(2) Dormir toda la noche\n(3) No dormi\nIngrese un valor: ");
        scanf("%d", &subOption);

        switch(subOption){

            case 1:
                if(energy < 100){
                    energy = energy + 20;
                    if(energy >= 100){
                        energy = 100;
                    }
                }else{
                    energy = 100;
                }
                eat = eat - 20;
            break;

            case 2:
                energy = 100;
                eat = eat - 50;
            break;

            case 3:
            printf("\033[2J");
            break;

            default:
                    printf("Seleciona una opcion del 1-3");
            break;

        }     
    break;

    case 4:
        int s;
        printf("\033[2J");
        printf("Estado actual de %s\nEnergia actual: %d\nHambre actual: %d\n", name, energy, eat);
        printf("(1) Salir");
        scanf("%d",&s);
        if(s == 1){
            printf("\033[2J");
        }

    break;

    case 5:
        salir = 2;
    break;

default:
        printf("Selecciona una opcion entre 1-5");
    break;
}
}while(salir == 1);


return 0;

}