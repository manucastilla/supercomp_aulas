
typedef struct
{
    double peso;
    double preco;
} oferta;

int mais_barato(oferta *vec, int n)
{
    double melhor = 200.0;
    int melhor_i = 0;
    for (int i = 0; i < n; i++)
    {
        if ((vec[i].preco / vec[i].peso) < melhor)
        {
            melhor = vec[i].preco / vec[i].peso;
            melhor_i = i;
        }
    }
    return melhor_i;
}
