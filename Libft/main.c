#include <stdio.h>





//---------------------memset-------------------------

int	main(void)
{
	
	char mot[] = "bon";
	
	printf("%s", (char *)ft_memset((void*)mot, 97, 5));
	return 0;
}

//---------------------bzero-------------------------

int	main(void)
{
	
	char mot[] = "bonjour";
	
	printf("%s\n", mot);
	
	bzero((void*)mot, 1); 
	
	printf("%s\n", mot);
	char *tmp = mot;
	tmp++;
	printf("%s\n", tmp);
	return 0;
}
