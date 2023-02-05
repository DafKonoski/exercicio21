//Digitar um nome e solicitar que seja mostrado em maiúsculo na tela.

#include <stdio.h>

int main() {

  char nome[20];
  
  printf("Digite um nome:\n");
  gets(nome);

  for(int i = 0; i < strlen(nome); i++){
    nome[i] = toupper(nome[i]);
    printf("%c", nome[i]);
  }
  
}