#include <stdio.h>

int temInt(char s[30]) {
  if(s[0] == 'i' && s[1] == 'n' && s[2] == 't') return 1;

  return 0;
}

int temAsterisco(char s[30]) {
  if(s[0] == '*' || s[4] == '*') return 1;

  return 0;
}

int temPontoEVirgula(char s[30]) {
  for (int i = 0; i < 30; i++) {
    if(s[i] == ';') return 1;
  }

  return 0;
}

int temAtribuicao(char s[30]) {
  for (int i = 0; i < 30; i++) {
    if(s[i] == '=') return 1;
  }

  return 0;
}

int pegarNomeDaVariavel(char s[30]) {
  if(temInt(s)) {
    if(temAsterisco(s)) {
      return s[5];
    }

    return s[4];
  } 

  if(temAsterisco(s)) {
    return s[1];
  }

  return s[0];
}

int jaCadastrado(char nomeDaVariavel, char nomes[100000]) {
  for(int i = 0; i < 100000; i++) {
    printf("%c", nomes[i]);
    if (nomeDaVariavel == nomes[i]) {
      return 1;
    }
  }

  return 0;
}

int main() {
  char nomes[100000];
  int valores[100000];

  int l = 0;

  while(1) {
    char s[30];
    l++;

    if (fgets(s, 30, stdin) != NULL) {
      printf("%s", s);

      if(!temPontoEVirgula(s)) {
        printf("erro de sintaxe na linha %d\n", l);
        return 1;
      }

      char nomeDaVariavel = pegarNomeDaVariavel(s);
      printf("%d", jaCadastrado(nomeDaVariavel, nomes));
    
      // if(temAtribuicao(s) && jaCadastrado(nomeDaVariavel, nomes) == 0) {
      //   printf("var. nao declarada na linha %d\n", l);
      //   return 1;
      // }

    } else {

      return 0;
    }
  }
  

  return 0;
}
