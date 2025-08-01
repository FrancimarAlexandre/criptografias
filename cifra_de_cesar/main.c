#include <stdio.h>
#include <string.h>
void cifra_cesar(char texto[50], int deslocamento){
    int i;
    int n = strlen(texto); // tamanho do texto
    char resultado[strlen(texto)];
    for ( i = 0; i < n; i++)
    {
        // código ascii da letra
        int c = ("%d",texto[i]);
        
        int aux = c + deslocamento;

        texto[i] = ("%c",aux);
       
        resultado[i] = texto[i];
    }
    printf(resultado);
    
}

int main(){
    int deslocamento = 3;
    char texto[50] = "Cifra de César";
    cifra_cesar(texto,deslocamento);
    return 0;
}