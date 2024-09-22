#include "./ex00/ft_putchar.c"
#include "./ex01/ft_print_alphabet.c"
#include "./ex02/ft_print_reverse_alphabet.c"
#include "./ex03/ft_print_numbers.c"
#include "./ex04/ft_is_negative.c"
#include "./ex05/ft_print_comb.c"
#include "./ex06/ft_print_comb2.c"
#include "./ex07/ft_putnbr.c"
//#include "./ex08/ft_print_comb.c"

int main (void)
{

//ex 00
write(1,"ex00\n",5);
ft_putchar('W');
write(1,"\n",1);

//ex01
write(1,"ex01\n",5);
ft_print_alphabet();
write(1,"\n",1);

//ex02
write(1,"ex02\n",5);
ft_print_reverse_alphabet();
write(1,"\n",1);

//ex03
write(1,"ex03\n",5);
ft_print_numbers();
write(1,"\n",1);

//ex04
write(1,"ex04\n",5);
ft_is_negative(5);
write(1,"\n",1);
ft_is_negative(-5);
write(1,"\n",1);
ft_is_negative(0);
write(1,"\n",1);

//ex05
write(1,"ex05\n",5);
ft_print_comb();
write(1,"\n",1);

//ex06
write(1,"ex06\n",5);
ft_print_comb2();
write(1,"\n",1);

//ex07
write(1,"ex07\n",5);
ft_putnbr(5);
ft_putnbr(123456789);
ft_putnbr(0);
ft_putnbr(-5);
ft_putnbr(-123456789);

//ex08
write(1,"ex08\n",5);
ft_print_comb(3);
write(1,"\n",1);

return 0;
}
