int main()
{
    int test, X, Y, a, b;

    while (1)
    {
        scanf("%d", &test);
        if (test == 0)
            break;

        scanf("%d%d", &X, &Y);
        while (test--)
        {
            scanf("%d%d", &a, &b);

            if (X < a && Y < b)
                printf("NE\n");
            if (X > a && Y > b)
                printf("SO\n");
            if (X > a && Y < b)
                printf("NO\n");
            if (X < a && Y > b)
                printf("SE\n");
            if (X == a || Y == b)
                printf("divisa\n");
        }
    }

    return 0;
}
