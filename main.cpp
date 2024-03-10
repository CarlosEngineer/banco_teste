#include<iostream>
#include<string>
#include "Conta.hpp"

using namespace std;
 

int main ()
{   
    //cadastro da conta utilizando a struct do modelo bancario do programa. 

    Conta CarlosConta;
    CarlosConta.numero = "116626";
    CarlosConta.cpfTitular = "49649646";
    CarlosConta.nomeTitular = "carlos eduardo";
    CarlosConta.saldo =  100;


    cout << "Carlos conta saldo de - " << CarlosConta.saldo << endl;

    CarlosConta.depositar(100);

    cout << "Carlos conta saldo de - " << CarlosConta.saldo << endl;

    
    return 0;
}