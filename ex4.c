#include <stdio.h>

int main(){
  int times;
  float a;
  scanf("%d",&times);//leitura de numero
  for(int i = 0;i<times;i++){
    /*
    Programe seu codigo aqui
    */
    scanf("%f",&a);
    printf("%.1f",a);
  }
  return 0;
}