#include <stdio.h>
#include <string.h>
 int main()
{
    char str1[]="Sunil";
    char str2[]="Sahu";
    /*Copy contents of str1 to str2
    memcpy(void *to,const void *from,size_t numbytes);*/
    puts("Before memcpy");
    puts(str1);
    puts(str2);
    memcpy(str2,str1,sizeof(str1));
    puts("After memcpy");
    puts(str1);
    puts(str2);
    return 0;
}
