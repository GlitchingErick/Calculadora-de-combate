/*
Name: Calculadora
Author: Erick da Silva Gama
Date: 23/03/2026
Description: calculadora de combate para jogos de luta ou rpgs.
Programming language: C
Version: 3.0
Objective: Prática básica em DS. O uso pode ser conveniente :)
*/

#include <stdio.h>
#include <locale.h>

//PROTÓTIPOS (Aviso ao compilador) 
int aplicarTipoAtaque(int tipo, int ataque, int *defesa);
int calcularDano(int ataque, int defesa);
int aplicarCritico(int dano, int critico);
int aplicarDanoVida(int vida, int dano);

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
    if(tipo_ataque < 1 || tipo_ataque > 3)
    {
        printf("Tipo de ataque invalido!\n");
        return 1;
    }

    //dados do inimigo
    printf("Digite a vida do oponente: ");
    scanf("%d", &vida); 
    if(vida <= 0)
    {
        printf("Vida invalida!\n");
        return 1;
    }

    printf("Digite a defesa do oponente: ");
    scanf("%d", &defesa_base);
    if(defesa_base < 0)
    {
        printf("Defesa invalida!\n");
        return 1;
    }

    printf("O oponente esta se defendendo? (1 = Sim / 0 = Nao): ");
    scanf("%d", &defendendo);
    if(defendendo != 0 && defendendo != 1)
    {
        printf("Valor invalido para defesa!\n");
        return 1;
    }

    //Dados de ataque
    printf("Digite o dano do seu ataque: "); 
    scanf("%d", &danoAtaque);
    if(danoAtaque < 0)
    {
        printf("Dano invalido!\n");
        return 1;
    }

    printf("Houve dano critico? (1 = sim / 0 = nao): ");
    scanf("%d", &critico);
    if(critico != 0 && critico != 1)
    {
        printf("Valor de critico invalido!\n");
        return 1;
    }

    //cálculo 
    

    //Efeitos de ataque
    danoAtaque = aplicarTipoAtaque(tipo_ataque, danoAtaque, &defesa_base);
        //aplicando defesa
    if(defendendo != 0)
    {
        defesa_base *= 2;
    }

    //calcular dano
    danoTotal = calcularDano(danoAtaque, defesa_base);

    //adição de crítico
    danoTotal = aplicarCritico(danoTotal, critico);

    //Cálculo de vida
    vida = aplicarDanoVida(vida, danoTotal);


    //Saída

    puts("\n====RESULTADO====\n");

    printf("Vida restante do oponente: %d\n", vida);
    printf("Dano final causado: %d\n", danoTotal);

    return 0;
    
}//fim do main.

//Função de escolha de ataque
int aplicarTipoAtaque(int tipo, int ataque, int *defesa)
{
    if(tipo == 2)
    {
        printf("\nATAQUE ESPECIAL!\n");
        ataque = ataque * 3 / 2;
    }
    else if(tipo == 3)
    {
        printf("\nFIREBALL!\n");
        *defesa /= 2;
    }
    else
    {
        printf("\nGolpe Comum!\n");
    }

    return ataque;
}// fim da função de esocolha de ataque

//Função do calculo de dano
int calcularDano(int ataque, int defesa)
{
    int dano = ataque - defesa;

    if(dano < 0)
    {
        dano = 0;
    }

    return dano;

}//Fim da função de calculo de dano

//função de adição de crítico
int aplicarCritico(int dano, int critico)
{

    if (critico == 1)
    {
        printf("\nCRITICO!\n");
        return dano * 2;
    }

    return dano;

}//fim da função de crítico

//função de aplicação de dano para a vida
int aplicarDanoVida(int vida, int dano)
{
    vida -= dano;

    if(vida < 0)
    {
        vida = 0;
    }

    return vida;

}//fim da função de aplicação de dano a vida