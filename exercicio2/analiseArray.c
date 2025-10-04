#include <stdio.h>

// EXERCÍCIO 2: ANÁLISE DE ARRAY
// Crie um programa que trabalhe com arrays de números inteiros,
// demonstrando tanto passagem por valor quanto por referência.
// O sistema deve analisar estatisticamente um conjunto de números fornecidos pelo usuário.

// Protótipos de Funções
void preencherArray(int arr[], int tamanho);
void exibirArray(const int arr[], int tamanho);
int encontrarMaior(const int arr[], int tamanho);
int encontrarMenor(const int arr[], int tamanho);
float calcularMedia(const int arr[], int tamanho);
void ordenarArray(int arr[], int tamanho);

#define TAMANHO 10

int main()
{
  int numeros[TAMANHO];

  preencherArray(numeros, TAMANHO);

  exibirArray(numeros, TAMANHO);

  printf("Maior valor: %d\n", encontrarMaior(numeros, TAMANHO));
  printf("Menor valor: %d\n", encontrarMenor(numeros, TAMANHO));
  printf("Media: %.2f\n", calcularMedia(numeros, TAMANHO));

  ordenarArray(numeros, TAMANHO);

  printf("Array ordenado: ");
  exibirArray(numeros, TAMANHO);

  return 0;
}

void preencherArray(int arr[], int tamanho)
{
  printf("Digite %d numeros:\n", tamanho);
  for (int i = 0; i < tamanho; i++)
  {
    printf("Numero %d: ", i + 1);
    scanf("%d", &arr[i]);
  }
}

void exibirArray(const int arr[], int tamanho)
{
  printf("Array: [");
  for (int i = 0; i < tamanho; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("]\n");
}

int encontrarMaior(const int arr[], int tamanho)
{
  int maior = arr[0];
  for (int i = 0; i < tamanho; i++)
  {
    if (maior < arr[i])
    {
      maior = arr[i];
    }
  }
  return maior;
}

int encontrarMenor(const int arr[], int tamanho)
{
  int menor = arr[0];
  for (int i = 0; i < tamanho; i++)
  {
    if (menor > arr[i])
    {
      menor = arr[i];
    }
  }
  return menor;
}

float calcularMedia(const int arr[], int tamanho)
{
  int soma = 0;
  for (int i = 0; i < tamanho; i++)
  {
    soma += arr[i];
  }
  return (float)soma / tamanho;
}

void ordenarArray(int arr[], int tamanho)
{
  for (int i = 0; i < tamanho; i++)
  {
    for (int j = 0; j < tamanho - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}
