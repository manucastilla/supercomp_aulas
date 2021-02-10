int maior_soma(int *vec, int n)
{
    int soma = -2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (i != j)
            {
                if (vec[i] + vec[j] > soma)
                {
                    soma = vec[i] + vec[j];
                }
            }
        }
    }
    return soma;
}