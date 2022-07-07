[root@localhost root]# cat pro1.c
#include <sdtio.h>
int pro1(int arg)
{
	printf("hello£º%d\n",arg) ;
   return  0;
}

[root@localhost root]# cat pro2.c
#include <sdtio.h>
int pro2(char *arg)
{
	printf("ÄúºÃ£º%s\n",arg) ;
   return  0;
}