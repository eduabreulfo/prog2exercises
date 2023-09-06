
typedef struct Pessoa Pessoa;

Pessoa *pessoa_criar();
void pessoa_ler(Pessoa *);
void pessoa_imprime_bin(Pessoa *, char pathPessoa);
void pessoa_ler_bin(Pessoa *, char pathPessoa);
void pessoa_destruir(Pessoa *);