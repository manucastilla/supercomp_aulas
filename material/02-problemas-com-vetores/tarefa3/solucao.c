void conta_repeticoes(int *vec, int n)
{
    for (int i = 0; i < n; i++)
    {
        int el = vec[i];


        int contagem = 0;
        for (int j = 0; j < n; j++)
        {
            if (vec[i] == el)
                contagem++;
        }
        printf("%d aparece %d vezes\n", el, contagem);
    }
}