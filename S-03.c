#include<stdio.h>

int main() {

  float n1,n2,n3,m;
  
  printf("digite a primeira nota\n");
  scanf("%f",&n1);

  printf("digite a segunda nota\n");
  scanf("%f",&n2);

  printf("digite a terceira nota\n");
  scanf("%f",&n3);

  m=(n1+n2+n3)/3;

  printf("Media=%0.2f",m);
  
  return 0;
  
}
