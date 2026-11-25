#include <stdio.h>

int main(void){

    double saldoInicial = 0;
    double saldo = 0;

    double despesa1 = 0;
    double despesa2 = 0;
    double despesa3 = 0;
    double despesa4 = 0;
    double despesa5 = 0;

    double totalDepesas = 0;
    double mediaDesesas = 0;
    double percentualGasto = 0;

    int quantidadeDespesas = 0;

    printf("============================================\n");
    printf("            sistema financeiro 2\n");
    printf("            controle de despesas\n");
    printf("============================================\n");

    printf("informe o saldo inicial: R$");
    printf("%lf",&saldoInicial);

    saldo = saldoInicial;

    printf("\n===== Despesa 1 ====\n");
    printf("informe o valor: R$ ");
    scanf("%lf", &despesa1);

    totalDepesas += despesa1;
    saldo -= despesa1;
    quantidadeDespesas++;

    printf("total gasto: R$ %.2f\n", totalDepesas);
    printf("saldo atual: R$ %.2f\n", saldo);


    printf("\n===== Despesa2 ====\n");
    printf("informe o valor : R$ ");
    scanf("%lf", &despesa2);

    totalDepesas += despesa2;
    saldo -= despesa2;
    quantidadeDespesas++;

    printf("\n===== despesa 3 ===\n");
    printf("informe o valor : R$ ");
    scanf("%lf", &despesa3);

    totalDepesas += despesa3;
    saldo -= despesa3;
    quantidadeDespesas++;

    printf("Total gasto: R$ %.2f\n", totalDepesas);
    printf("saldo atual: R$ %.2f\n", saldo);

    printf("\n==== despesa 4 =====\n");
    printf("informe o valor : R$ ");
    scanf("%lf", &despesa4);

    totalDepesas += despesa4;
    saldo -= despesa4;
    quantidadeDespesas++;

    printf("total gasto: R$ %.2f\n", totalDepesas);
    printf("saldo atual: R$ %.2f\n", saldo);


    printf("\n==== Despesa 5 ====\n");
    printf("informe o valor : R$ ");
    scanf("%lf", &despesa5);

    totalDepesas += despesa5;
    saldo -= despesa5;
    quantidadeDespesas++;

    printf("total gasto: R$ %.2f", totalDepesas);
    printf("saldo atual: R$ %.2f\n", saldo); 

    mediaDesesas = totalDepesas / quantidadeDespesas;
    percentualGasto = totalDepesas / saldoInicial * 100.0;

    printf("\n================================================\n");
    printf("              Relatorio financeiro\n");
    printf("==================================================\n");

    printf("saldo inicial: R$ %.2f\n", saldoInicial);

    printf("\n=== Despensas Registradas ===\n");

    printf("dispensa 1: R$ %.2f\n", despesa1);
    printf("despesa  2: R$ %.2f\n", despesa2);
    printf("despesa  3: R$ %.2f\n", despesa3);
    printf("despesa 4 : R$ %.2f\n", despesa4);
    printf("despesa 5 : R$ %.2f\n", despesa5);

    printf("\n===== Resumo Financeiro ===\n");

    printf("Quantidade : %d\n", quantidadeDespesas);
    printf("Total gasto: R$ %.2f\n", totalDepesas);
    printf("percentual gasto: %.2f\n", mediaDesesas);
    printf("saldo final: R$ %.2f\n", saldo);

    printf("===================================\n");

    return 0;
}