int    ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int    index;

    if (n == 0)
        return (0);
    index = 0;
    while (s1[index] && s2[index] && s1[index] == s2[index] && index < n - 1)
        index++;
    return (s1[index] - s2[index]);
}
