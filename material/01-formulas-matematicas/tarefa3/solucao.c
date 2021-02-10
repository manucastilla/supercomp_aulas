void media_movel(double *x, double *y, int dias, int n)
{
    for (int i = 0; i < n; i++)
    {
        double soma = 0.0;
        if (i < dias)
        {
            for (int j = 0; j <= i; j++)
            {
                soma += x[j];
            }
        }
        if (i >= dias)
        {
            for (int j = i; j > i - dias; j--)
            {
                soma += x[j];
            }
        }

        y[i] = soma / dias;
    }
}