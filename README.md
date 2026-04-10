- Calculadora de Combate

Projeto desenvolvido em linguagem C com o objetivo de simular um sistema básico de cálculo de dano em jogos de luta e RPG.

- Sobre o projeto

A Calculadora de Combate permite ao usuário inserir valores de ataque, defesa, vida e definir condições como dano crítico, tipo de ataque e estado de defesa do oponente, retornando o dano final causado e a vida restante.

Este projeto foi criado como prática de lógica de programação, uso de variáveis, estruturas condicionais e interação com o usuário via terminal.

🚀 Versão 2.0 - Atualização
✨ Novas funcionalidades:
❤️ Sistema de vida (HP)
🛡️ Sistema de defesa aprimorado
🧍 Estado de defesa (oponente pode se defender)
⚔️ Tipos de ataque:
Golpe comum
Ataque especial (dano aumentado)
Fireball (reduz defesa)
💥 Sistema de dano crítico
- Como funciona

O cálculo segue a lógica:

Escolha do tipo de ataque
Aplicação de efeitos:
Especial → aumenta o dano
Fireball → reduz a defesa
Defesa ativa → aumenta a defesa
Cálculo do dano base:
Dano = Ataque - Defesa
Aplicação de crítico:
Se crítico → dano dobrado
Validação:
Se dano < 0 → dano = 0
Aplicação na vida:
Vida = Vida - Dano
- Como executar
1. Compilar
gcc CalculadoraDeCombate.c -o combate
2. Executar
./combate

(ou combate.exe no Windows)

- Exemplo de uso
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

Vida restante do oponente: 30
Dano final causado: 70
- Objetivo
Praticar lógica de programação em C
Entender entrada e saída de dados
Aplicar estruturas condicionais
Evoluir um sistema simples para um sistema de combate mais completo
Iniciar projetos versionados com Git
- Possíveis melhorias futuras (v3.0)
Sistema de frames (startup, active, recovery)
Crítico aleatório com rand()
Loop de combate
Menu interativo
Uso de structs
Diferenciação entre ataque físico e mágico
- Autor

Erick da Silva Gama

- Status

- Projeto em evolução — versão 2.0 concluída