#include <stdio.h>
#define MAX 20

int main()
{
   int nota, soma=0, i, qtd=0;
   int vNotas[MAX];
   float media;

   printf("nota: ");
   scanf("%d", &nota);

   while(nota>=0 && nota<=10) {
      // guarda nota no vetor
      vNotas[qtd] = nota;
      qtd = qtd + 1;
      soma = soma + nota;

      // pede a proxima nota
      printf("nota: ");
      scanf("%d", &nota);
   }

   media = (float)soma / qtd;

   printf("contador: %8d\n", qtd);
   printf("soma....: %8d\n", soma);
   printf("media...: %.1f\n", media);


   printf("conteudo do vetor\n");
   for (int i=0; i<qtd; i++) {
      printf("pos %d = val %d\n",i,vNotas[i]);
   }

   printf("\nfim\n");
}
