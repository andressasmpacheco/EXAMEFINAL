#include <stdio.h>
int main()
{
     float pt, mat, hist, geo, cie, soma;
     printf("Digite a nota do exame em portugues\n\n");
     scanf("%f", &pt);
     printf("Digite a nota do exame em matematica\n\n");
     scanf("%f", &mat);
     printf("Digite a nota do exame em Historia\n\n");
     scanf("%f", &hist);
     printf("Digite a nota do exame em Geografia\n\n");
     scanf("%f", &geo);
     printf("Digite a nota do exame em Ciencias\n\n");
     scanf("%f", &cie);
     soma = pt + mat + hist+ geo + cie ; 

     if(soma>=35)
     {
     printf("Classificação: A passou em todos os exames;");
     }
     else if ((soma>=21) && (soma<35))
     {
            printf("Classificação: B passou em I, IIe IV, mas não em III ou V");
     }
     else if ((soma>14) || (soma<21))
     {
          printf("Classificação: C Ie II, IIIou IV, mas não em V");
     }
     else{
          printf("REPROVADO");
     }
