#pragma once

typedef struct cliente Cliente;

Cliente ClienteCadastrar();
void ClienteAumentarSaldo(Cliente c);
void ClienteReduzirSaldo(Cliente c);
void ClienteDestruir(Cliente c);
