/*
** EPITECH PROJECT, 2021
** my_print_comb.c
** File description:
** Displays,in ascending order, all the numbers composed by
** three different digits
*/
void my_putchar (char c);

int my_comma_espace_controller (int c, int d, int u)
{
    if (c != 7 || d != 8 || u != 9) {
        my_putchar(44);
        my_putchar(32);
    }
}

int  my_units_controller (int c, int d, int u)
{
  while (u <= 9) {
      if (c != d && d != u) {
          my_putchar(c + 48);
          my_putchar(d + 48);
          my_putchar(u + 48);
          my_comma_espace_controller (c, d, u);
      }
      u++;
  }
}

int my_print_comb (void)
{
    int c = 0;
    int d = 0;
    int u = 0;

    while (c <= 9) {
        while (d <= 9) {
            my_units_controller (c, d, u);
            d++;
            u = d;
        }
        c++;
        d = c;
    }
    my_putchar('\n');
}
