#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdint.h>
# include <stddef.h>
# include <limits.h>

typedef struct s_option
{
	int		minus;
	int		zero;
	int		width;
	int		dot;
	int		precision;
	int		hash;
	int		space;
	int		plus;
	char	type;
	size_t	str_len;
	int		negative;
	int		option_offset;
}	t_option;

int			ft_printf(const char *format, ...);
void		init_struct(t_option *str);
int			ft_printtype(char type, t_option *options, va_list *arg);
t_option	ft_get_option(const char *format, va_list *arg, t_option *options);
int			get_flags(const char *format, t_option *options);
int			get_width(const char *format, t_option *options);
int			get_precision(const char *format, t_option *options);
void		get_type(char type, t_option *options);
int			print_char(t_option *str, va_list arg);
int			print_hex(t_option	*str, char *aux_str);
int			print_hexa(t_option *str, va_list arg);
int			print_int(t_option *str, va_list arg);
int			print_nbr(t_option	*str, int nbr);
void		ft_putunbr_fd(unsigned int n, int fd);
int			print_ptr(t_option *str, va_list arg);
char		*str_data(char *c_str, t_option *str, va_list arg);
int			print_str(t_option *str, va_list arg);
char		*check_str(char *str);
char		*str_data(char *c_str, t_option *str, va_list arg);
int			print_unsigned(t_option *str, va_list arg);
void		check_uformat(unsigned int unbr, t_option *str);
int			print_uint(t_option *str, char *aux_str);

#endif
