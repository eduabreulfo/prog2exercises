#pragma once

typedef struct cliente Cliente;

Cliente ClienteCadastrar();
void ClienteAumentarSaldo(Cliente c, unsigned int valor);
void ClienteReduzirSaldo(Cliente c, unsigned int valor);
void ClienteDestruir(Cliente c);
