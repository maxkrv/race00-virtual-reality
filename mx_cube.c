void mx_printchar(char c);

void mx_cube(int n) {
    if (n < 2) {
        return;
    }

    for (int i = 0; i < n / 2 + 1; i++)
    {
        mx_printchar(' ');
    }
    mx_printchar('+');

    for (int i = 0; i < n * 2; i++)
    {
        mx_printchar('-');
    }
    mx_printchar('+');
    mx_printchar('\n');

    for (int i = 0; i < n / 2; i++)
    {
        for (int j = n / 2 - i; j > 0; j--)
        {
            mx_printchar(' ');
        }
        mx_printchar('/');
        for (int j = 0; j < n * 2; j++)
        {
            mx_printchar(' ');
        }
        mx_printchar('/');
        for (int j = 0; j < i; j++)
        {
            mx_printchar(' ');
        }
        mx_printchar('|');
        mx_printchar('\n');
    }

    mx_printchar('+');
    for (int i = 0; i < n * 2; i++)
    {
        mx_printchar('-');
    }
    mx_printchar('+');

    for (int i = 0; i < n / 2; i++)
    {
        mx_printchar(' ');
    }
    mx_printchar('|');
    mx_printchar('\n');

    int _n = n;
    for (int i = 0; i < n; i++)
    {
        _n--;
        mx_printchar('|');
        for (int j = 0; j < n * 2; j++)
        {
            mx_printchar(' ');
        }
        mx_printchar('|');

        if (n % 2 == 0 ? i < n / 2 : i <= n/2)
        {
            for (int j = 0; j < n / 2; j++)
            {
                mx_printchar(' ');
            }
        } else {
            for (int j = 0; j < _n; j++)
            {
                mx_printchar(' ');
            }
        }
                
        if (n % 2 == 0)
        {
            if (i == n / 2 - 1)
            {
                mx_printchar('+');
            }
            else if (i >= n / 2)
            {
                mx_printchar('/');
            }
            else
            {
                mx_printchar('|');
            }
        }
        else
        {
            if (i == n / 2)
            {
                mx_printchar('+');
            }
            else if (i >= n / 2)
            {
                mx_printchar('/');
            }
            else
            {
                mx_printchar('|');
            }
        }
        mx_printchar('\n');
    }

    mx_printchar('+');
    for (int i = 0; i < n * 2; i++)
    {
        mx_printchar('-');
    }
    mx_printchar('+');
    mx_printchar('\n');
}
