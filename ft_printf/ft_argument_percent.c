#include "libft.h"

int ft_argument_percent(void)
{
	return (write(1, "%", sizeof(char) * 1));
}
