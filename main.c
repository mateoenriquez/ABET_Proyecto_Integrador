#include <stdio.h>
#include <string.h>

int main (void){

    
    int opcion, pacientes, i, sexo[100];
    float peso[100], altura[100], dosis[100];
    float porcentajeH1[100], porcentajeH2[100], porcentajeM1[100], porcentajeM2[100], dosisH[100], dosisM[100]; 

    do
    {
    printf("\n");
    printf("---MENU---\n");
    printf("\n");
    printf("1. Calculadora para dosis de vitaminas\n");
    printf("2. Creditos\n");
    printf("3. Salir\n");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
       printf("\n");
        printf("---Ingreso de datos---\n");
        printf("Recuerde que las dosis indicadas son para personas mayores a 18 anios\n");
        printf("Ingresar el numero de pacientes a evaluar ");
        scanf("%d", &pacientes);
        for (i = 1; i <= pacientes; i++)
        {
            printf("\n");
            printf("---Paciente Nro %d---\n", i);
            printf("Ingresar el peso del paciente nro %d en libras [90-220 lb] ", i);
            scanf("%f", &peso[i]);
            if (peso[i]<90 || peso[i]>220)
            {
                printf("\n");
                printf("Peso ingresado fuera de rango esperado. [90-220 lb]\n");
                return 1;
                printf("\n");
                
            }
            
            printf("Ingresar la altura del paciente nro %d en centimetros [130-210 cm] ", i);
            scanf("%f", &altura[i]);
            if (altura[i]<130 || altura[i]>=210)
            {
                printf("\n");
                printf("Altura ingresada fuera del rango esperado. [130-210 cm]\n");
                return 1;
                printf("\n");
            }
            
            printf("Ingresar el sexo del paciente nro %d, [1.Masculino 2.Femenino] ", i);
            scanf("%d", &sexo[i]);
            if (sexo[i]!=1 && sexo[i]!=2)
            {
                printf("\n");
                printf("Sexo del paciente no valido. Ingresar nuevamente [1.Masculino 2.Femenino]\n");
                return 1;
                printf("\n");
            }
        }

        for (i = 1; i <= pacientes; i++)
        {
            if (sexo[i]==1)
            {
                if (altura[i]>160 && peso[i]>=150){

                porcentajeH1[i]=altura[i]*.20;
                porcentajeH2[i]=peso[i]*.80;
                dosisH[i]=porcentajeH1[i]+porcentajeH2[i];  

                }else{

                porcentajeH1[i]=altura[i]*.30;
                porcentajeH2[i]=peso[i]*.70;
                dosisH[i]=porcentajeH1[i]+porcentajeH2[i];

                }
            }else{
                if (altura[i]>150 && peso[i]>=130)
                {
                    porcentajeM1[i]=altura[i]*.25;
                    porcentajeM2[i]=peso[i]*.75;
                    dosisM[i]=porcentajeM1[i]+porcentajeM2[i];
                }else{
                    porcentajeM1[i]=altura[i]*.35;
                    porcentajeM2[i]=peso[i]*.65;
                    dosisM[i]=porcentajeM1[i]+porcentajeM2[i];
                }
                
            }
        }
        for (i = 1; i <= pacientes; i++)
        {
            printf("\n");
            printf("---Paciente %d---\n", i);
            printf("Altura: %.2f cm\n", altura[i]);
            printf("Peso: %.2f lb\n", peso[i]);
            if (sexo[i]==1)
            {
                printf("Sexo: Masculino\n");
                printf("Dosis recomendada de vitaminas: %.2f g \n", dosisH[i]);
            }else{
                printf("Sexo: Femenino\n");
                printf("Dosis recomendada de vitaminas: %.2f g \n", dosisM[i]);
            }
            
        }
        break;

    case 2:
    printf("Codigo creado por Mateo Enriquez y Ashlee Soledispa\n");
    printf("Tutor asignado: Nicolas Rojas\n");
    printf("\n");
    break; 

    case 3:
    printf("Gracias por usar el programa\n"); 
    break;  

        default:
        printf("Opcion no valida\n");
        break;
    }
    
    } while (opcion!=3);
    
   return 0;
}