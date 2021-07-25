#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdint.h>
# include <stddef.h>
# include <limits.h>

typedef struct s_option
{
	int		minus;
	int 	zero;
	int		width;
	int		dot;
	int		precision;
	int		hash;
	int 	space;
	int 	plus;
	char	type;
	char	*str;
	size_t	str_len;
	int		option_offset;
} t_option;

int			ft_printf(const char *format, ...);
int			ft_printtype(t_option *str);

t_option	*ft_get_option(const char *format, va_list arg);
int			get_flags(const char *format, t_option *options);
int			get_width(const char *format, t_option *options);
int			get_precision(const char *format, t_option *options);
void		get_type(char type, t_option *options);

void		get_str(char type, t_option *options, va_list arg);

void		convert_char(t_option *options, va_list arg);
void		convert_str(t_option *options, va_list arg);
void		convert_ptr(t_option *options, va_list arg);
void		convert_perc(t_option *options);

void		convert_deci(t_option *options, va_list arg);
void		convert_ibaseten(t_option *options, va_list arg);
void		convert_ui(t_option *options, va_list arg);
void		convert_hex(t_option *options, va_list arg);
void		convert_heX(t_option *options, va_list arg);

int			print_char(t_option *str);
int			print_hexa(t_option *str);
int			print_int(t_option *str);
int			print_ptr(t_option *str);
int			print_str(t_option *str);
int			print_unsigned(t_option *str);

#endif
