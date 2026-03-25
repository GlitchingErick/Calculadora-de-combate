/*
Name: Calculadora de combate para jogos de luta em geral.
Author: Erick da Silva Gama
Date: 23/03/2026
Description: Calculadora de combate para jogos de luta
Programming language: C
Versão: 1.0
Objetivo: Prática básica em DS. O uso pode ser conveniente :)
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    setlocale(LC_NUMERIC, "C");


    int ataque, defesa;
    int critico;
    int dano;


    puts("=== CALCULADORA DE COMBATE ===");

    //Entrada dos dados do ataque do jogador
    printf("Digite o ataque: "); 
    scanf("%d", &ataque);

    //defesa do inimigo
    printf("Digite a defesa do oponente: ");
    scanf("%d", &defesa);

    printf("Houve dano crítico? (1 = sim / 0 = nao): ");
    scanf("%d", &critico);

    dano = ataque - defesa;

    if (critico == 1)
    {
        dano = dano * 2;
    }

    if(dano < 0)
    {
        dano = 0;
    }

    printf("Dano final causado: %d\n", dano);

    return 0;
    
}//fim do main