#include <stdio.h>
#include "ft_printf.h"
#include "libft/libft.h"

int	main(void)
{
	/*int		i;
	int		b;

	i = printf("% d", 0);
	printf(" | return: %i\n", i);
	b = ft_printf("% d", 0);
	ft_printf(" | return: %i\n", b);
	
	char	text[10] = "abc12345";
	int		i = -10;
	unsigned int	u_i = 10;
	char	letter = 'T';

	ft_printf("%s\n", text);
	printf("%s\n", text);

	ft_printf("%i\n", i);
	printf("%i\n", i);

	ft_printf("%u\n", u_i);
	printf("%u\n", u_i);

	ft_printf("%c\n", letter);
	printf("%c\n", letter);

	ft_printf("%x\n", i);
	printf("%x\n", i);

	ft_printf("%X\n", i);
	printf("%X\n", i);

	ft_printf("%%\n");
	printf("%%\n");

	ft_printf("%p\n", &u_i);
	printf("%p\n", &u_i);
	
	printf("%#ls\n", &u_i);
	printf("%#ls\n", &u_i);
	
	ft_printf("%s %i %u %c %%", text, i, u_i, letter);*/

	printf("---------------- Teste %% ----------------\n");
	printf(" | %i\n", printf("%%"));
	printf(" | %i\n", ft_printf("%%"));
	printf("\n");
	printf(" | %i\n", printf("%% Teste teste %% %% "));
	printf(" | %i\n", ft_printf("%% Teste teste %% %% "));
	printf("\n");


	printf("---------------- Teste str ----------------\n");
	printf(" | %i\n", printf("Teste teste"));
	printf(" | %i\n", ft_printf("Teste teste"));
	printf("\n");

	printf("---------------- Teste %%c ----------------\n");
	printf(" | %i\n", printf("%c", 'p'));
	printf(" | %i\n", ft_printf("%c", 'p'));
	printf(" | %i\n", printf("%c%c%c", 'o', 'i', '!'));
	printf(" | %i\n", ft_printf("%c%c%c", 'o', 'i', '!'));
	printf("\n");

	printf("---------------- Teste %%s ----------------\n");
	printf(" | %i\n", printf("%s", "print string"));
	printf(" | %i\n", ft_printf("%s", "print string"));
	printf("\n");
	
	printf("---------------- Teste %%i ----------------\n");
	printf(" | %i\n", printf("%i", INT_MIN));
	printf(" | %i\n", ft_printf("%i", INT_MIN));
	printf("\n");
	printf(" | %i\n", printf("%i", INT_MAX));
	printf(" | %i\n", ft_printf("%i", INT_MAX));
	printf("\n");
	printf(" | %i\n", printf("%i", UINT_MAX));
	printf(" | %i\n", ft_printf("%i", UINT_MAX));
	printf("\n");

	printf("---------------- Teste %%d ----------------\n");
	printf(" | %i\n", printf("%d", INT_MIN));
	printf(" | %i\n", ft_printf("%d", INT_MIN));
	printf("\n");
	printf(" | %i\n", printf("%d", INT_MAX));
	printf(" | %i\n", ft_printf("%d", INT_MAX));
	printf("\n");
	printf(" | %i\n", printf("%d", UINT_MAX));
	printf(" | %i\n", ft_printf("%d", UINT_MAX));
	printf("\n");

	printf("---------------- Teste %%u ----------------\n");
	printf(" | %i\n", printf("%u", INT_MIN));
	printf(" | %i\n", ft_printf("%u", INT_MIN));
	printf("\n");
	printf(" | %i\n", printf("%u", INT_MAX));
	printf(" | %i\n", ft_printf("%u", INT_MAX));
	printf("\n");
	printf(" | %i\n", printf("%u", UINT_MAX));
	printf(" | %i\n", ft_printf("%u", UINT_MAX));
	printf("\n");
	printf(" | %i\n", printf("%u", (UINT_MAX * -1)));
	printf(" | %i\n", ft_printf("%u", (UINT_MAX * -1)));
	printf("\n");
	printf(" | %i\n", printf("%ld", 4294967295));
	printf(" | %i\n", ft_printf("%u", 4294967295));
	printf("\n");
	printf(" | %i\n", printf("%ld", -4294967295));
	printf(" | %i\n", ft_printf("%u", -4294967295));
	printf("\n");

	printf("---------------- Teste %%x ----------------\n");
	printf(" | %i\n", printf("%x", 0x12A));
	printf(" | %i\n", ft_printf("%x", 0x12A));
	printf(" | %i\n", printf("%x", 0xA));
	printf(" | %i\n", ft_printf("%x", 0xA));
	printf(" | %i\n", printf("%x", 100));
	printf(" | %i\n", ft_printf("%x", 100));
	printf(" | %i\n", printf("%x", 2));
	printf(" | %i\n", ft_printf("%x", 2));
	printf(" | %i\n", printf("%x", 16));
	printf(" | %i\n", ft_printf("%x", 16));
	printf(" | %i\n", printf("%x", 41854));
	printf(" | %i\n", ft_printf("%x", 41854));
	printf(" | %i\n", printf("%x", INT_MIN));
	printf(" | %i\n", ft_printf("%x", INT_MIN));
	printf(" | %i\n", printf("%x", INT_MAX));
	printf(" | %i\n", ft_printf("%x", INT_MAX));
	printf("\n");

	printf("---------------- Teste %%X ----------------\n");
	printf(" | %i\n", printf("%X", 0x12A));
	printf(" | %i\n", ft_printf("%X", 0x12A));
	printf(" | %i\n", printf("%X", 0xA));
	printf(" | %i\n", ft_printf("%X", 0xA));
	printf(" | %i\n", printf("%X", 100));
	printf(" | %i\n", ft_printf("%X", 100));
	printf(" | %i\n", printf("%X", 2));
	printf(" | %i\n", ft_printf("%X", 2));
	printf(" | %i\n", printf("%X", 16));
	printf(" | %i\n", ft_printf("%X", 16));
	printf(" | %i\n", printf("%X", 41854));
	printf(" | %i\n", ft_printf("%X", 41854));
	printf(" | %i\n", printf("%X", INT_MIN));
	printf(" | %i\n", ft_printf("%X", INT_MIN));
	printf(" | %i\n", printf("%X", INT_MAX));
	printf(" | %i\n", ft_printf("%X", INT_MAX));
	printf("\n");
	
	int 	inteiro = 334;
	char 	*str = "teste";


	printf("---------------- Teste %%p ----------------\n");
	printf(" | %i\n", printf("%p", &inteiro));
	printf(" | %i\n", ft_printf("%p", &inteiro));
	printf(" | %i\n", printf("%p", str));
	printf(" | %i\n", ft_printf("%p", str));
	printf(" | %i\n", printf("%p", "address"));
	printf(" | %i\n", ft_printf("%p", "address"));	
	printf(" | %i\n", printf("%p", "3"));
	printf(" | %i\n", ft_printf("%p", "3"));
	printf(" | [%p], return: %i\n", &inteiro, printf("%p\n", &inteiro));
	ft_printf(" | [%p], return: %i\n", &inteiro, ft_printf("%p\n", &inteiro));
	printf("\n");


	printf("---------------- Teste multi ----------------\n");
	printf(" | %i\n", printf("Six par: %10s, %10i, %s, %c, %u, %%", "string", 123, "string", 'q', UINT_MAX));
	printf(" | %i\n", ft_printf("Six par: %#0+.s, %10i, %+s, %-c, %u, %%", "string", 123, "string", 'q', UINT_MAX));
	printf("\n");
	
	return (0);
}