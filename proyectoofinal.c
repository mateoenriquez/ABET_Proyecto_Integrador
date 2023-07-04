#include <stdio.h>
#include <string.h>

int main(void){
    int opcion, genero, edad;
    float estatura, peso, porcentajeA, porcentajeB, dosisA, porcentajeC, porcentajeD, dosisB, pesoIdeal;

    printf("Bienvenido, estudiante \n");
    //Al agregar un do hacemos que sea de modo repetitivo
    do
    {
        printf("¿Que desea realizar?\n");
        printf("Seleccione 1 para consultar la dosis de vitamina sugerida \n");
        printf("Seleccione 2 para Salir \n");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            printf("¿Cual es su edad? \n");
            scanf("%d", &edad);
            //El programa no es aceptado para personas menores de 18 años
            if (edad > 18)
            { 
                printf("Escribir 1 si es hombre, escribir 2 si es mujer \n");
                scanf("%d", &genero);
                //Evitamos que se agregue un numero no valido
                if (genero > 2 || genero < 1)
                {
                    printf("Los datos ingresados no son validos \n");
                }
                //Se pide los datos de entrada al usuario
                printf("¿Cual es su estatura? Escribir en m, ej. 1.60 \n" );
                scanf("%f", &estatura);
                printf("¿Cual es su peso? Escribir en lb, ej. 150 \n");
                scanf("%f", &peso);
                //Funcion para evitar errores al momento de solicitar los datos
                fflush(stdin);

                //Se realiza el calculo en caso de ser varon
                if (genero == 1)
                {
                    if (estatura > 1.60 && peso >= 150)
                    {
                        porcentajeA= (estatura * 20)/100;
                        porcentajeB= (peso * 80)/100;
                        dosisA= porcentajeA + porcentajeB;
                        printf("Se sugiere una dosis de %.2f gramos de vitamina \n" , dosisA);

                    }
                    else {
                        porcentajeA= (estatura * 30)/100;
                        porcentajeB= (peso * 70)/100;
                        dosisA= porcentajeA + porcentajeB;
                        printf("Se sugiere una dosis de %.2f gramos de vitamina \n" , dosisA);
                    }
                }
                //Se realiza el calculo en caso de ser mujer
                else {
                    if (estatura > 1.50 && peso >= 130) 
                    {
                       porcentajeC= (estatura * 25)/100;
                       porcentajeD= (peso * 75)/100;
                       dosisB = porcentajeC + porcentajeD;
                       printf("Se sugiere una dosis de %.2f gramos de vitamina \n" , dosisB); 
                    }
                    else {
                        porcentajeC= (estatura * 35)/100;
                        porcentajeD= (peso * 65)/100;
                        dosisB = porcentajeC + porcentajeD;
                        printf("Se sugiere una dosis de %.2f gramos de vitamina \n" , dosisB); 
                    }
                }

                //Para optimizar el programa, se agregó una opcion extra donde se calcula si la persona tiene un peso ideal, bajo de peso o sobrepeso
                //Para que no sea un programa tan extenso, se resumio los datos en rangos de 15 cm de estatura, aunque son datos reales, no son exactos
                if(genero==1)
                {
                    if (estatura >= 1.55 && estatura <= 1.65)
                    {
                        if (peso > 125 && peso < 128)
                        {
                            printf("Esta en su peso ideal \n");
                        }
                        else {
                            if (peso < 125)
                            {
                            printf("Tiene falta de peso \n");
                            }
                            else {
                                printf("Tiene sobrepeso \n");
                            }
                        }
                    }
                    else {
                        if (estatura >= 1.65 && estatura <= 1.80)
                        {
                          if (peso > 154 && peso < 195)
                        {
                            printf("Esta en su peso ideal \n");
                        }
                        else {
                            if (peso < 154)
                            {
                            printf("Tiene falta de peso \n");
                            }
                            else {
                                printf("Tiene sobrepeso \n");
                            }
                        }  
                        }
                        else {
                            if (estatura >= 1.80 && estatura <= 1.95)
                            {
                                if (peso > 198 && peso < 220)
                                {
                                 printf("Esta en su peso ideal \n");
                                }
                                else {
                                if (peso < 198)
                                {
                                printf("Tiene falta de peso \n");
                                }
                                else {
                                printf("Tiene sobrepeso \n");
                                }
                            }
                        }

                    }
                }
                }
                else {
                    if(genero==2)
                {
                    if (estatura >= 1.50 && estatura <= 1.65)
                    {
                        if (peso > 106 && peso < 138)
                        {
                            printf("Esta en su peso ideal \n");
                        }
                        else {
                            if (peso < 106)
                            {
                            printf("Tiene falta de peso \n");
                            }
                            else {
                                printf("Tiene sobrepeso \n");
                            }
                        }
                    }
                    else {
                        if (estatura >= 1.65 && estatura <= 1.80)
                        {
                          if (peso > 140 && peso < 171)
                        {
                            printf("Esta en su peso ideal \n");
                        }
                        else {
                            if (peso < 140)
                            {
                            printf("Tiene falta de peso \n");
                            }
                            else {
                                printf("Tiene sobrepeso \n");
                            }
                        }  
                        }
                }
                }

                }
            }  
            else {

                printf ("Esta edad no es valida para el programa \n");
            }
            
            break;
        case 2:
            printf("Gracias por usar el programa \n");
            break;
        default:
            printf("Esta opcion no es valida \n");
            break;
        }
    } while (opcion != 2);

    return 0;
}
