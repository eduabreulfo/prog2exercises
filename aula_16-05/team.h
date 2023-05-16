#pragma once

typedef struct team Team;

Team *team_build();
void team_read(Team *);
void team_show(Team *);
void team_destroy(Team *);
