#include <stdio.h>

int main(void){
    int codigo, dia, mes , ano; 
    char categoria;

    printf("\n======= 01 indenficacao =======\n");
    printf("codigo do resposavel: ");
    scanf("%d", &codigo);
    printf("Dia:");
    scanf("%d", &dia);
    printf("Mes:");
    scanf("%d",&mes);
    printf("Ano:");
    scanf("%d", &ano);
    printf("Categoria(P/E):");
    scanf("%c", &categoria);

    double contaPrincipal, segundaConta, dinheiro, saldoInicial;

    printf("Conta principal:");
    scanf("%lf",&contaPrincipal);
    printf("Segunda conta: ");
    scanf("%lf", &segundaConta);
    printf("Dinheiro em especie:");
    scanf("%lf", &dinheiro);

    saldoInicial = contaPrincipal + segundaConta + dinheiro;
    printf("saldo consoliddo: R$ %.2f\n", saldoInicial);

    return 0;



}