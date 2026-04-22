Calculadora de Combate

Projeto desenvolvido em linguagem C com o objetivo de simular um sistema de cálculo de dano em jogos de luta e RPG.

Sobre o projeto

A Calculadora de Combate permite ao usuário inserir valores de ataque, defesa, vida e definir condições como dano crítico, tipo de ataque e estado de defesa do oponente, retornando o dano final causado e a vida restante.

Este projeto foi criado como prática de lógica de programação, uso de variáveis, estruturas condicionais e interação com o usuário via terminal, evoluindo progressivamente com novas funcionalidades e melhorias estruturais.

Versão 3.0 - Atualização

Novas melhorias implementadas:

Modularização do código com funções
Organização do fluxo principal (main) com chamadas de funções
Validação de entrada de dados (prevenção de valores inválidos)
Refinamento da lógica de defesa e interação com tipos de ataque
Separação de responsabilidades (cada função com uma finalidade específica)
Funcionalidades atuais
Sistema de vida (HP)
Sistema de defesa
Estado de defesa (oponente pode se defender)
Tipos de ataque:
Golpe comum
Ataque especial (dano aumentado)
Fireball (reduz defesa)
Sistema de dano crítico (manual)
Validação de entradas do usuário
Como funciona

O cálculo segue a lógica:

Escolha do tipo de ataque
Aplicação dos efeitos do ataque
Especial: aumenta o dano
Fireball: reduz a defesa
Aplicação da defesa (caso o oponente esteja defendendo)
Cálculo do dano base
Dano = Ataque - Defesa
Aplicação de crítico
Se crítico: dano dobrado
Validação do dano
Se dano < 0: dano = 0
Aplicação do dano na vida
Vida = Vida - Dano
Como executar
1. Compilar
gcc CalculadoraDeCombate.c -o combate
2. Executar
./combate

No Windows:

combate.exe
Exemplo de uso
=== CALCULADORA DE COMBATE ===

Escolha o tipo de ataque:
1 - Golpe comum
2 - Especial
3 - Fireball

Digite a vida do oponente: 100
Digite a defesa do oponente: 20
O oponente está se defendendo? (1 = Sim / 0 = Nao): 1
Digite o dano do seu ataque: 50
Houve dano crítico? (1 = sim / 0 = nao): 1

====RESULTADO====

Vida restante do oponente: 30
Dano final causado: 70
Objetivo
Praticar lógica de programação em C
Entender entrada e saída de dados
Aplicar estruturas condicionais
Introduzir modularização com funções
Evoluir um sistema simples para um sistema mais estruturado
Desenvolver projetos versionados com Git
Possíveis melhorias futuras (v4.0)
Sistema de frames (opcional)
Crítico aleatório (opcional)
Loop de combate
Menu interativo
Separação em múltiplos arquivos (.c e .h)
Uso de structs
Diferenciação entre ataque físico e mágico
Autor

Erick da Silva Gama

Status

Projeto em evolução — versão 3.0 concluída