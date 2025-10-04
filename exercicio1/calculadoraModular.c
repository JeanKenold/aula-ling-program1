#include <stdio.h>

// EXERCÍCIO 1: SISTEMA DE CALCULADORA MODULAR

// Desenvolva um sistema de calculadora que demonstre
// o uso de funções com passagem por valor e por referência.
// O programa deve ser organizado de forma modular,
// onde cada operação matemática seja implementada em uma função separada.

// Protótipos das funções
void exibirResultado(float res);
void exibirMenu();
int obterOpcao();
void obterNumeros(float *num1, float *num2);
float somar(float a, float b);
float subtrair(float a, float b);
float multiplicar(float a, float b);
float dividir(float a, float b);

int main()
{
  int opcao = 1;

  while (opcao != 0)
  {
    exibirMenu();
    opcao = obterOpcao();

    switch (opcao)
    {
    case 1:
    { // Soma
      float num1, num2, resultado;
      obterNumeros(&num1, &num2);
      resultado = somar(num1, num2);
      exibirResultado(resultado);
      break;
    }
    case 2:
    { // Subtrair
      float num1, num2, resultado;
      obterNumeros(&num1, &num2);
      resultado = subtrair(num1, num2);
      exibirResultado(resultado);
      break;
    }
    case 3:
    { // Multiplicar
      float num1, num2, resultado;
      obterNumeros(&num1, &num2);
      resultado = multiplicar(num1, num2);
      exibirResultado(resultado);
      break;
    }
    case 4:
    { // Dividir
      float num1, num2, resultado;
      obterNumeros(&num1, &num2);
      resultado = dividir(num1, num2);
      exibirResultado(resultado);
      break;
    }
    case 0: // Sair
      break;
    default:
      printf("Opcao invalida! Tente novamente.\n");
      break;
    }
  }

  printf("Calculadora encerrada.\n");
  return 0;
}

// Definições das Funções
void exibirResultado(float res)
{
  printf("Resultado: %.2f\n", res);
}

void exibirMenu()
{
  printf("\n===CALCULADORA===\n");
  printf("1. Somar\n");
  printf("2. Subtrair\n");
  printf("3. Multiplicar\n");
  printf("4. Dividir\n");
  printf("0. Sair\n");
}

int obterOpcao()
{
  int escolha;
  printf("Opcao: ");
  scanf("%d", &escolha);
  return escolha;
}

void obterNumeros(float *num1, float *num2)
{
  printf("Digite o primeiro número: ");
  scanf("%f", num1);
  printf("Digite o segundo número: ");
  scanf("%f", num2);
}

float somar(float a, float b)
{
  float resultado = a + b;
  return resultado;
}

float multiplicar(float a, float b)
{
  float resultado = a * b;
  return resultado;
}

float subtrair(float a, float b)
{
  float resultado = a - b;
  return resultado;
}

float dividir(float a, float b)
{
  if (b == 0)
  {
    printf("undefined!\n");
    return 0;
  }
  else
  {
    float resultado = a / b;
    return resultado;
  }
}