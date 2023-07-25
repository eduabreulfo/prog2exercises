
typedef struct Missil Missil;

typedef struct Arsenal Arsenal;

Missil *missil_criar();

void missil_ler(Missil *);

void missil_destruir(Missil *);

Arsenal *arsenal_criar();

void arsenal_add(Arsenal *, Missil *);

void arsenal_destruir(Arsenal *);