# ⚔️ Calculadora de Combate

Projeto desenvolvido em linguagem C com o objetivo de simular um sistema básico de cálculo de dano em jogos de luta.

---

## 🧠 Sobre o projeto

A **Calculadora de Combate** permite ao usuário inserir valores de ataque, defesa e definir se houve dano crítico, retornando o dano final causado.

Este projeto foi criado como prática de lógica de programação, uso de variáveis, estruturas condicionais e interação com o usuário via terminal.

---

## ⚙️ Como funciona

O cálculo segue a lógica:

* Dano base = Ataque - Defesa
* Se crítico → dano dobrado
* Se dano < 0 → dano = 0

---

## 💻 Como executar

### 1. Compilar

```bash
gcc CalculadoraDeCombate.c -o combate
```

### 2. Executar

```bash
./combate
```

---

## 📌 Exemplo de uso

```
=== CALCULADORA DE COMBATE ===
Digite o ataque: 50
Digite a defesa do oponente: 20
Houve dano crítico? (1 = sim / 0 = não): 1

Dano final causado: 60
```

---

## 🎯 Objetivo

* Praticar lógica de programação em C
* Entender entrada e saída de dados
* Aplicar estruturas condicionais
* Iniciar projetos versionados com Git

---

## 🚀 Possíveis melhorias futuras

* Sistema de vida (HP)
* Crítico aleatório com `rand()`
* Loop de combate
* Menu interativo
* Uso de `structs`

---

## 👨‍💻 Autor

**Erick da Silva Gama**

---

## 🏁 Status

✅ Projeto concluído (versão 1.0)
