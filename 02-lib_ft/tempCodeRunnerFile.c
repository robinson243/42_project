void to_upper_if_even(unsigned int i, char *c)
{
    if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
        *c = *c - 32;
}

int main(void)
{
    char str[] = "hello world";
    ft_striteri(str, to_upper_if_even);
    printf("Résultat : %s\n", str);
    return 0;
}