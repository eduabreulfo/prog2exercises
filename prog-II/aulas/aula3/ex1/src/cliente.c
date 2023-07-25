#include "../header/cliente.h"

struct{
  char nome[255];
  int cpf;
  int data_nascimento[3]; // dd-mm-aaaa
  char endereco[255];
  int celular;
  char email[255];
  float saldo;
} cliente;

void ClienteCadastrar(){
  Cliente *cliente;

  cliente->;

}

void ClienteAumentarSaldo(Cliente *c, unsigned int valor){
  c->saldo += valor;;
}
void ClienteReduzirSaldo(){

}
void ClienteDestruir();