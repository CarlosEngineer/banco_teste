#pragma once
#include<string>

//estrurura da conta

struct Conta
{
    std::string numero;
    std::string cpfTitular;
    std::string nomeTitular;
    float saldo;


    void sacar(float valorSacar);
    void depositar(float valorDeposistar);

};