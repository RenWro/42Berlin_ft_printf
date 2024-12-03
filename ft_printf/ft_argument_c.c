#include "libft.h"

int	ft_argument_c(char c)
{
	return (write(1, &c, sizeof(char) * 1));
}
