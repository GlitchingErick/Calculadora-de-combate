/*
Name: Calculadora de combate para jogos de luta em geral.
Author: Erick da Silva Gama
Date: 23/03/2026
Description: Calculadora de combate para jogos de luta
Programming language: C
Versão: 2.0
Objetivo: Prática básica em DS. O uso pode ser conveniente :)
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    setlocale(LC_NUMERIC, "C");


    int danoAtaque, defendendo, defesa_base;
    int critico, danoTotal, vida, tipo_ataque;


    puts("=== CALCULADORA DE COMBATE ===");

    //Entrada de dados
    //Tipo de ataque

    printf("\nEscolha o tipo de ataque:\n");
    printf("1 - Golpe comum\n");
    printf("2 - Especial\n");
    printf("3 - Fireball\n");
    scanf("%d", &tipo_ataque);

    //dados do inimigo
    printf("Digite a vida do oponente: ");
    scanf("%d", &vida); 

    printf("Digite a defesa do oponente: ");
    scanf("%d", &defesa_base);

    printf("O oponente está se defendendo? (1 = Sim / 0 = Nao): ");
    scanf("%d", &defendendo);

    if(defendendo == 1)
    {
        defesa_base *= 2;
    }

    //Dados de ataque
    printf("Digite o dano do seu ataque: "); 
    scanf("%d", &danoAtaque);

    printf("Houve dano crítico? (1 = sim / 0 = nao): ");
    scanf("%d", &critico);

    //cálculo 
    //Efeitos de ataque

    if(tipo_ataque == 2)
    {
        danoAtaque = danoAtaque * 3 / 2; //Especial mais forte
    }
    else if(tipo_ataque == 3)
    {
        defesa_base /= 2;
    }
    
    //calcular dano

    danoTotal = danoAtaque - defesa_base;

    if (critico == 1)
    {
        danoTotal = danoTotal * 2;
    }

    if(danoTotal < 0)
    {
        danoTotal = 0;
    }

    //Cálculo de vida

    vida -= danoTotal;

    if(vida < 0)
    {
        vida = 0;
    }

    //Saída

    puts("\n====RESULTADO====\n");

    printf("Vida restante do oponente: %d\n", vida);
    printf("Dano final causado: %d\n", danoTotal);

    return 0;
    
}//fim do main.