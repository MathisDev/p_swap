# include <stdlib.h>
# include <unistd.h>
/* AUX */
size_t	ft_strlen(const char *s);
void add(char c,char *l1);

/* SWAP */ 
void	sa(char	*li);
void	sb(char	*li); 
void	ss(char *l1,char *l2);
/* PUSH  */ 
void	pb(char *l1,char *l2);
void	pa(char *l1,char *l2);
/* ROTATE */ 
void	ra(char *l1);
void	rb(char *l1);
void	rr(char *l1,char *l2);
/* REV & ROT */
void	rra(char *l1);
void	rrb(char *l1);
void	rrr(char *l1,char *l2);