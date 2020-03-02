make
make clean
gcc -Wall -Wextra -Werror -o Nashoba libftprintf.a main_test.c
./Nashoba a | cat -e > printf_result
./Nashoba 1a | cat -e > your_printf_result
diff printf_result your_printf_result
rm Nashoba
rm printf_result
rm your_printf_result
