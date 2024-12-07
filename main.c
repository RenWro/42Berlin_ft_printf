

#include "libftprintf.h"
#include <stdio.h>  

int main(void)
{
    int bytes_ft;
    int bytes_printf;

    printf("\n--- Mandatory Specifiers ---\n");

    // 1. Test '%c' (character)
    bytes_ft = ft_printf("ft_printf: |%c|\n", 'A');
    bytes_printf = printf("printf:    |%c|\n", 'A');
    printf("Bytes returned: ft_printf = %d, printf = %d\n\n", bytes_ft, bytes_printf);

    // 2. Test '%s' (string)
    bytes_ft = ft_printf("ft_printf: |%s|\n", "Hello, World!");
    bytes_printf = printf("printf:    |%s|\n", "Hello, World!");
    printf("Bytes returned: ft_printf = %d, printf = %d\n\n", bytes_ft, bytes_printf);

    // 3. Test '%p' (pointer)
    int a = 42;
    bytes_ft = ft_printf("ft_printf: |%p|\n", &a);
    bytes_printf = printf("printf:    |%p|\n", &a);
    printf("Bytes returned: ft_printf = %d, printf = %d\n\n", bytes_ft, bytes_printf);

    // 4. Test '%d' (signed integer)
    bytes_ft = ft_printf("ft_printf: |%d|\n", -42);
    bytes_printf = printf("printf:    |%d|\n", -42);
    printf("Bytes returned: ft_printf = %d, printf = %d\n\n", bytes_ft, bytes_printf);

    // 5. Test '%u' (unsigned integer)
    bytes_ft = ft_printf("ft_printf: |%u|\n", 4294967295);
    bytes_printf = printf("printf:    |%u|\n", 4294967295);
    printf("Bytes returned: ft_printf = %d, printf = %d\n\n", bytes_ft, bytes_printf);

    // 6. Test '%x' (hexadecimal lowercase)
    bytes_ft = ft_printf("ft_printf: |%x|\n", 255);
    bytes_printf = printf("printf:    |%x|\n", 255);
    printf("Bytes returned: ft_printf = %d, printf = %d\n\n", bytes_ft, bytes_printf);

    // 7. Test '%X' (hexadecimal uppercase)
    bytes_ft = ft_printf("ft_printf: |%X|\n", 255);
    bytes_printf = printf("printf:    |%X|\n", 255);
    printf("Bytes returned: ft_printf = %d, printf = %d\n\n", bytes_ft, bytes_printf);

    // 8. Test '%%' (percent sign)
    bytes_ft = ft_printf("ft_printf: |%%|\n");
    bytes_printf = printf("printf:    |%%|\n");
    printf("Bytes returned: ft_printf = %d, printf = %d\n\n", bytes_ft, bytes_printf);

    printf("\n--- Special Cases ---\n");

    // 9. Test special cases: 0
    bytes_ft = ft_printf("ft_printf: |%d|\n", 0);
    bytes_printf = printf("printf:    |%d|\n", 0);
    printf("Bytes returned: ft_printf = %d, printf = %d\n\n", bytes_ft, bytes_printf);

    // 10. Test special cases: INT_MIN
    bytes_ft = ft_printf("ft_printf: |%d|\n", -2147483648);
    bytes_printf = printf("printf:    |%d|\n", -2147483648);
    printf("Bytes returned: ft_printf = %d, printf = %d\n\n", bytes_ft, bytes_printf);

    // 11. Test special cases: empty string
    bytes_ft = ft_printf("ft_printf: |%s|\n", "");
    bytes_printf = printf("printf:    |%s|\n", "");
    printf("Bytes returned: ft_printf = %d, printf = %d\n\n", bytes_ft, bytes_printf);

    // 12. Test special cases: null pointer
    bytes_ft = ft_printf("ft_printf: |%p|\n", NULL);
    bytes_printf = printf("printf:    |%p|\n", NULL);
    printf("Bytes returned: ft_printf = %d, printf = %d\n\n", bytes_ft, bytes_printf);

    printf("\n--- Bonus Flags ---\n");

    // 13. Test '-' flag (left alignment)
    bytes_ft = ft_printf("ft_printf: |%-10d|\n", 42);
    bytes_printf = printf("printf:    |%-10d|\n", 42);
    printf("Bytes returned: ft_printf = %d, printf = %d\n\n", bytes_ft, bytes_printf);

    // 14. Test '0' flag (zero padding)
    bytes_ft = ft_printf("ft_printf: |%010d|\n", 42);
    bytes_printf = printf("printf:    |%010d|\n", 42);
    printf("Bytes returned: ft_printf = %d, printf = %d\n\n", bytes_ft, bytes_printf);

    // 15. Test '.' flag (precision)
    bytes_ft = ft_printf("ft_printf: |%.5d|\n", 42);
    bytes_printf = printf("printf:    |%.5d|\n", 42);
    printf("Bytes returned: ft_printf = %d, printf = %d\n\n", bytes_ft, bytes_printf);

    // 16. Test '#' flag (prefix for hexadecimals)
    bytes_ft = ft_printf("ft_printf: |%#x|\n", 42);
    bytes_printf = printf("printf:    |%#x|\n", 42);
    printf("Bytes returned: ft_printf = %d, printf = %d\n\n", bytes_ft, bytes_printf);

    // 17. Test '+' flag (explicit plus sign)
    bytes_ft = ft_printf("ft_printf: |%+d|\n", 42);
    bytes_printf = printf("printf:    |%+d|\n", 42);
    printf("Bytes returned: ft_printf = %d, printf = %d\n\n", bytes_ft, bytes_printf);

    // 18. Test ' ' flag (space before positive numbers)
    bytes_ft = ft_printf("ft_printf: |% d|\n", 42);
    bytes_printf = printf("printf:    |% d|\n", 42);
    printf("Bytes returned: ft_printf = %d, printf = %d\n\n", bytes_ft, bytes_printf);

    printf("\n--- Duplicate Flags ---\n");

    // 19. Test duplicate flags: '--'
    bytes_ft = ft_printf("ft_printf: |%--10d|\n", 42);
    bytes_printf = printf("printf:    |%--10d|\n", 42);
    printf("Bytes returned: ft_printf = %d, printf = %d\n\n", bytes_ft, bytes_printf);

    // 20. Test duplicate flags: '00'
    bytes_ft = ft_printf("ft_printf: |%00d|\n", 42);
    bytes_printf = printf("printf:    |%00d|\n", 42);
    printf("Bytes returned: ft_printf = %d, printf = %d\n\n", bytes_ft, bytes_printf);

    return 0;
}
