/*Exercício:
Faça um programa que simule o gerenciamento de uma conta de uma agência de banco. Cada correntista possui um nome, CPF, data de nascimento, endereço, celular, e-mail e saldo da conta
A agência é tão pequena que ela pode conter apenas 100 clientes
Você deve implementar as seguintes funcionalidades:
Cadastrar um novo cliente na agência
Inserir uma quantia de dinheiro na conta de um cliente
Remover uma quantia de dinheiro na conta de um cliente
Remover um cliente da agência
*/

#include <stdio.h>
#include "cliente.h"

int main(){
  int i=0;
  
  Cliente cliente1 = ClienteCadastrar();

  return 0;
}