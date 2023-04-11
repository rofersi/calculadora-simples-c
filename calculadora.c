#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{

  char input[100];
  int sinal;
  float num1, num2, resultado;
  char op;

  printf("Calculadora em C\n");

  printf("Operacoes disponiveis\n");
  printf("'+' : SOMA\n");
  printf("'-' : SUBTRACAO\n");
  printf("'*' : MULTIPLICACAO\n");
  printf("'/' : DIVISAO\n");  

  do
  {
    printf("Digite a expressao na forma: numero1 operador numero2\n");
    printf("Exemplos: 1 + 1, 2.1 * 3.1\n");
    printf("Para sair digite: 0 0 0\n");
    fgets(input, sizeof(input), stdin);    
    
    char *token = strtok(input, " "); // strtok divide a string passada na variavel input usado o conteúdo " " como separador.
    num1 = atof(token);               // atof convert string em float

    token = strtok(NULL, " ");
    op = token[0];

    token = strtok(NULL, " ");
    num2 = atof(token);

    switch (op)
    {
    case '+':
      resultado = num1 + num2;
      printf("Resultado: %.2f\n", resultado);
      break;
    case '-':
      resultado = num1 - num2;
      printf("Resultado: %.2f\n", resultado);
      break;
    case '*':
      resultado = num1 * num2;
      printf("Resultado: %.2f\n", resultado);
      break;
    case '/':
      if (num2 > 0)
      {
        resultado = num1 / num2;
        printf("Resultado: %.2f\n", resultado);
      }
      else
      {
        printf("Erro!!! Tentativa divisão por 0\n");
      }
      break;
    case '0':
      sinal = 0;
      break;
    default:
      printf("Erro!!! Operação não reconhecida.\n");
      break;
    }

  } while (sinal != 0);  
}