/*********************************************************
* Automato Finito Não Deterministico com Movimento Vazio *
*                                                        *
* Linguagem: 0*1*2*                                      *
*                                                        *
* G = <N,Σ,P,S>                                          *
* N = {S,A,B,C}                                          *
* P = { S -> ABC                                         *
*       A -> ε|0A                                        *
*       B -> ε|1B                                        *
*       C -> ε|2C }                                      *
*                                                        *
* Autor: Elton Fonseca                                   *
* Ciência da Computação - PUC Minas                      *
*                                                        *
**********************************************************/

#include <stdio.h>

void q0(char palavra[], int cont);
void q1(char palavra[], int cont);
void qf(char palavra[], int cont);
void erro();
int tamanhoPalavra(char palavra[]);

main()
{
    char palavra[] = "00112";
    int contador = 0;
    q0(palavra, contador);
}

void q0(char palavra[], int cont)
{
    if(palavra[cont] == '\0')
    {
        q1(palavra, cont);
    }
    else if(palavra[cont] == '0')
    {
        q0(palavra, cont+1);
    }
    else if(palavra[cont] == '1')
    {
        q1(palavra, cont+1);
    }
    else if(palavra[cont] == '2')
    {
        qf(palavra, cont+1);
    }
    else
    {
        erro();
    }
}
void q1(char palavra[], int cont)
{
    if(palavra[cont] == '\0')
    {
        qf(palavra, cont);
    }
    else if(palavra[cont] == '1')
    {
        q1(palavra, cont+1);
    }
    else if(palavra[cont] == '2')
    {
        qf(palavra, cont+1);
    }
    else
    {
        erro();
    }
}

void qf(char palavra[], int cont)
{
    if(palavra[cont] == '\0')
    {
        printf("Palavra Aceita!");
    }
    else if(palavra[cont] == '2')
    {
        qf(palavra, cont+1);
    }
    else
    {
        erro();
    }
}

void erro()
{
    printf("Palavra Rejeitada!");
}
