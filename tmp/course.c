Structure:

typedef struct s_bonhomme
{
	struct s_list	*next;
    char *yeux;
    char *taille;
    int porte_casquette;
}               t_bonhomme; //t_bonhoome = struct s_bonhomme

int main()
{
    t_bonhomme Dario;
    Dario.yeux = "verts";
    Dario.taille = "petit";
    Dario.porte_casquette = 0;
    return (0);
}

int main()
{
    t_bonhomme *Dario;
    Dario = malloc(sizeof(*t_bonhomme));
    Dario->yeux = "verts";
    Dario->taille = "petit";
    Dario->porte_casquette = 0;
    return (0);
}
