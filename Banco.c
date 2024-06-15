#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
  int escolha, pix;
  float saldo = 0, deposito = 0, saque, valorpix;
    printf("Saldo: %f", saldo);
    printf("O que voce quer fazer? \n 1. Depositar \n 2. Sacar \n3. Fazer pix "
           "\n4. Visitar loja \n5. Sair \n");
    scanf("%d", &escolha);

    if (escolha == 1) {
      printf("Quanto irá depositar? \n");
      scanf("%f", &deposito);
      saldo = deposito;
      printf("Saldo: %f", saldo);
      printf("Saldo: %f", saldo);
    printf("O que voce quer fazer? \n 1. Depositar \n 2. Sacar \n3. Fazer pix "
           "\n4. Visitar loja \n5. Sair \n");
    scanf("%d", &escolha);

    if (escolha == 1) {
      printf("Quanto irá depositar? \n");
      scanf("%f", &deposito);
      saldo = deposito;
      printf("Saldo: %f", saldo);
      
      
    } else if (escolha == 2) {
      if (saldo == 0) {
        printf("Voce nao tem dinheiro pra sacar");
      } else {
        printf("Quanto deseja retirar da conta?");
        scanf("%f", &saque);
        saldo = saldo - saque;
        printf("Saldo: %f", saldo);
      }
    } else if (escolha == 3) {
      printf("Quer fazer pix para quem? 1. Joao \n 2. Maria \n 3. Jose \n");
      scanf("%d", &pix);
      printf("Qual valor ?");
      scanf("%f", &valorpix);
      switch (pix) {
      case 1:
        printf("Voce fez pix para Joao de %f", valorpix);
        break;
      case 2:
        printf("Voce fez um pix para Maria de %f", valorpix);
        break;
      case 3:
        printf("Voce fez um pix para Jose de %f", valorpix);
        break;
      }
      saldo = saldo - valorpix;
      printf("Saldo: %f", saldo);
    } else if (escolha == 4) {
      printf("Visite a loja");
      printf(
          "Qual item da loja lhe interessa? 1. Bolacha \n 2. Refrigerante \n "
          "3. Coxinha \n");
      scanf("%d", &pix);
      switch (pix) {
      case 1:
        printf("Voce comprou bolacha %f", saldo - 3.5);
        break;
      case 2:
        printf("Voce comprou Refrigerante %f", saldo - 10);
        break;
      case 3:
        printf("Voce comprou coxinha %f", saldo - 5);
        break;
      }
    } else if (escolha == 5) {
      printf("Obrigado por usar nosso banco");
      exit(0);
    }
      
    } else if (escolha == 2) {
      if (saldo == 0) {
        printf("Voce nao tem dinheiro pra sacar");
      } else {
        printf("Quanto deseja retirar da conta?");
        scanf("%f", &saque);
        saldo = saldo - saque;
        printf("Saldo: %f", saldo);
        printf("Saldo: %f", saldo);
    printf("O que voce quer fazer? \n 1. Depositar \n 2. Sacar \n3. Fazer pix "
           "\n4. Visitar loja \n5. Sair \n");
    scanf("%d", &escolha);

    if (escolha == 1) {
      printf("Quanto irá depositar? \n");
      scanf("%f", &deposito);
      saldo = deposito;
      printf("Saldo: %f", saldo);
      
      
    } else if (escolha == 2) {
      if (saldo == 0) {
        printf("Voce nao tem dinheiro pra sacar");
      } else {
        printf("Quanto deseja retirar da conta?");
        scanf("%f", &saque);
        saldo = saldo - saque;
        printf("Saldo: %f", saldo);
      }
    } else if (escolha == 3) {
      printf("Quer fazer pix para quem? 1. Joao \n 2. Maria \n 3. Jose \n");
      scanf("%d", &pix);
      printf("Qual valor ?");
      scanf("%f", &valorpix);
      switch (pix) {
      case 1:
        printf("Voce fez pix para Joao de %f", valorpix);
        break;
      case 2:
        printf("Voce fez um pix para Maria de %f", valorpix);
        break;
      case 3:
        printf("Voce fez um pix para Jose de %f", valorpix);
        break;
      }
      saldo = saldo - valorpix;
      printf("Saldo: %f", saldo);
    } else if (escolha == 4) {
      printf("Visite a loja");
      printf(
          "Qual item da loja lhe interessa? 1. Bolacha \n 2. Refrigerante \n "
          "3. Coxinha \n");
      scanf("%d", &pix);
      switch (pix) {
      case 1:
        printf("Voce comprou bolacha %f", saldo - 3.5);
        break;
      case 2:
        printf("Voce comprou Refrigerante %f", saldo - 10);
        break;
      case 3:
        printf("Voce comprou coxinha %f", saldo - 5);
        break;
      }
    } else if (escolha == 5) {
      printf("Obrigado por usar nosso banco");
      exit(0);
    }
      }
    } else if (escolha == 3) {
      printf("Quer fazer pix para quem? 1. Joao \n 2. Maria \n 3. Jose \n");
      scanf("%d", &pix);
      printf("Qual valor ?");
      scanf("%f", &valorpix);
      switch (pix) {
      case 1:
        printf("Voce fez pix para Joao de %f", valorpix);
        break;
      case 2:
        printf("Voce fez um pix para Maria de %f", valorpix);
        break;
      case 3:
        printf("Voce fez um pix para Jose de %f", valorpix);
        break;
      }
      saldo = saldo - valorpix;
      printf("Saldo: %f", saldo);
      printf("Saldo: %f", saldo);
    printf("O que voce quer fazer? \n 1. Depositar \n 2. Sacar \n3. Fazer pix "
           "\n4. Visitar loja \n5. Sair \n");
    scanf("%d", &escolha);

    if (escolha == 1) {
      printf("Quanto irá depositar? \n");
      scanf("%f", &deposito);
      saldo = deposito;
      printf("Saldo: %f", saldo);
      
      
    } else if (escolha == 2) {
      if (saldo == 0) {
        printf("Voce nao tem dinheiro pra sacar");
      } else {
        printf("Quanto deseja retirar da conta?");
        scanf("%f", &saque);
        saldo = saldo - saque;
        printf("Saldo: %f", saldo);
      }
    } else if (escolha == 3) {
      printf("Quer fazer pix para quem? 1. Joao \n 2. Maria \n 3. Jose \n");
      scanf("%d", &pix);
      printf("Qual valor ?");
      scanf("%f", &valorpix);
      switch (pix) {
      case 1:
        printf("Voce fez pix para Joao de %f", valorpix);
        break;
      case 2:
        printf("Voce fez um pix para Maria de %f", valorpix);
        break;
      case 3:
        printf("Voce fez um pix para Jose de %f", valorpix);
        break;
      }
      saldo = saldo - valorpix;
      printf("Saldo: %f", saldo);
    } else if (escolha == 4) {
      printf("Visite a loja");
      printf(
          "Qual item da loja lhe interessa? 1. Bolacha \n 2. Refrigerante \n "
          "3. Coxinha \n");
      scanf("%d", &pix);
      switch (pix) {
      case 1:
        printf("Voce comprou bolacha %f", saldo - 3.5);
        break;
      case 2:
        printf("Voce comprou Refrigerante %f", saldo - 10);
        break;
      case 3:
        printf("Voce comprou coxinha %f", saldo - 5);
        break;
      }
    } else if (escolha == 5) {
      printf("Obrigado por usar nosso banco");
      exit(0);
    }
    } else if (escolha == 4) {
      printf("Visite a loja");
      printf(
          "Qual item da loja lhe interessa? 1. Bolacha \n 2. Refrigerante \n "
          "3. Coxinha \n");
      scanf("%d", &pix);
      switch (pix) {
      case 1:
        printf("Voce comprou bolacha %f", saldo - 3.5);
        break;
      case 2:
        printf("Voce comprou Refrigerante %f", saldo - 10);
        break;
      case 3:
        printf("Voce comprou coxinha %f", saldo - 5);
        break;
      }
      printf("Saldo: %f", saldo);
    printf("O que voce quer fazer? \n 1. Depositar \n 2. Sacar \n3. Fazer pix "
           "\n4. Visitar loja \n5. Sair \n");
    scanf("%d", &escolha);

    if (escolha == 1) {
      printf("Quanto irá depositar? \n");
      scanf("%f", &deposito);
      saldo = deposito;
      printf("Saldo: %f", saldo);
      
      
    } else if (escolha == 2) {
      if (saldo == 0) {
        printf("Voce nao tem dinheiro pra sacar");
      } else {
        printf("Quanto deseja retirar da conta?");
        scanf("%f", &saque);
        saldo = saldo - saque;
        printf("Saldo: %f", saldo);
      }
    } else if (escolha == 3) {
      printf("Quer fazer pix para quem? 1. Joao \n 2. Maria \n 3. Jose \n");
      scanf("%d", &pix);
      printf("Qual valor ?");
      scanf("%f", &valorpix);
      switch (pix) {
      case 1:
        printf("Voce fez pix para Joao de %f", valorpix);
        break;
      case 2:
        printf("Voce fez um pix para Maria de %f", valorpix);
        break;
      case 3:
        printf("Voce fez um pix para Jose de %f", valorpix);
        break;
      }
      saldo = saldo - valorpix;
      printf("Saldo: %f", saldo);
    } else if (escolha == 4) {
      printf("Visite a loja");
      printf(
          "Qual item da loja lhe interessa? 1. Bolacha \n 2. Refrigerante \n "
          "3. Coxinha \n");
      scanf("%d", &pix);
      switch (pix) {
      case 1:
        printf("Voce comprou bolacha %f", saldo - 3.5);
        break;
      case 2:
        printf("Voce comprou Refrigerante %f", saldo - 10);
        break;
      case 3:
        printf("Voce comprou coxinha %f", saldo - 5);
        break;
      }
    } else if (escolha == 5) {
      printf("Obrigado por usar nosso banco");
      exit(0);
    }
    } else if (escolha == 5) {
      printf("Obrigado por usar nosso banco");
      exit(0);
    }
  

  return 0;
}