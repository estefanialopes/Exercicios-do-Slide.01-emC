#include <stdio.h>

int main() {

  int KG, Gramas;

  printf("Digite o seu peso\n");
  scanf("%d",&KG);

  Gramas= KG*1000;

  printf("Seu peso em gramas eh:%d\n",Gramas);
  
  return 0;
}
