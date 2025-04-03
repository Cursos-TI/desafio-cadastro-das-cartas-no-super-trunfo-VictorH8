# **Documentação - Cadastro de Cartas Super Trunfo**

## **📌 Descrição**  
Este programa permite cadastrar informações sobre duas cartas do jogo **Super Trunfo** de países, registrando atributos como **código, população, área, PIB e número de pontos turísticos**. Após o cadastro, os dados são exibidos de forma organizada.

---

## **📌 Tecnologias utilizadas**  
✅ Linguagem: **C**  
✅ Biblioteca padrão: `<stdio.h>` (entrada e saída de dados)

---

## **📌 Funcionalidades**
1. **Cadastrar informações de duas cartas**  
   - Código do país (até 3 caracteres)  
   - População  
   - Área em km²  
   - PIB em bilhões de dólares  
   - Número de pontos turísticos  
   
2. **Exibir os dados cadastrados de forma organizada**  

3. **Validação de entrada do usuário**  
   - Caso o usuário insira um valor inválido, o programa pedirá uma nova entrada.

---

## **📌 Estrutura do Código**
### **1️⃣ Função `limparBuffer()`**
```c
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
```
- Evita problemas ao ler `scanf`, descartando caracteres extras no buffer de entrada.

---

### **2️⃣ Cadastro das Cartas**  
Para cada carta, o programa solicita entrada do usuário:
```c
printf("Código: ");
scanf("%3s", codigo1);
limparBuffer();

printf("População: ");
while (scanf("%d", &populacao1) != 1) {
    printf("Entrada inválida. Digite um número inteiro: ");
    limparBuffer();
}
```
- O código **lê e valida** cada entrada para evitar erros.

---

### **3️⃣ Exibição das Cartas**  
Após o cadastro, os dados são exibidos:
```c
printf("\n==== CARTA 1 ====\n");
printf("Código: %s\n", codigo1);
printf("População: %d habitantes\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões USD\n", pib1);
printf("Pontos turísticos: %d\n", pontosTuristicos1);
```
- Usa `%.2f` para formatar números decimais.

---

## **📌 Como executar**
1. **Compilar o código:**
   ```bash
   gcc main.c -o main
   ```
2. **Executar o programa:**
   ```bash
   ./main
   ```

---

## **📌 Melhorias Futuras**
🔹 Permitir o cadastro de mais cartas usando **arrays ou structs**  
🔹 Adicionar um **menu interativo** para facilitar o uso  
🔹 Implementar **comparação automática** entre as cartas  

---