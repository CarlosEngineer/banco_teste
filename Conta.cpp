#include "Conta.hpp"
#include <iostream>

// funcao para efetuar saques

void Conta::sacar(float valorSacar)
{
    if (valorSacar <0){
        std::cout << "Seu saldo e insuficiente." << std::endl;
        return;
    }
    if(valorSacar > saldo){
        std::cout << "Voce nao posui saldo suficiente!" << std:: endl;
        return;
    }
    saldo -= valorSacar;

}

//funcao para efetuar depositos

void Conta::depositar(float valorDeposistar)
{
    if (valorDeposistar < 0){
        std:: cout << "Seu saldo e insuficiente."<< std::endl;
        return;
    }

    saldo += valorDeposistar;
    
}