// #include <stdio.h>

// int myStrlen(const char *str);

// int main()
// {
//    char *s = "hello";
//    int *p;
//    double *d;
//    printf("char 포인터 크기 : %d\n", sizeof(s));
//    printf("int 포인터 크기 : %d\n", sizeof(p));
//    printf("double 포인터 크기 : %d\n", sizeof(d));

//    return 0;
// }

// #include <stdio.h>
// size_t myStrlen(const char *str); // typedef unsigned int size_t;
// int main(void)
// {
//    char s[] = "hello";
//    printf("%d\n", myStrlen(s));
//    return 0;
// }
// size_t myStrlen(const char *str)
// {
//    char *s;
//    for (s = str; *s; s++)
//    {
//       printf("%8X\n", s);
//    }
//    printf("%8X\n", s);
//    printf("s= %8X, str =%8X \n", s, str);

//    return s - str;
// }

#include <stdio.h>
int main()
{
   char *s = "world";
   int i;
   printf("%08X %08X %08X %s\n", &s, s, &s[0], s);
   for (i = 0; s[i] != '\0'; i++)
      printf("%08X %c\n", &s[i], s[i]);
   return 0;
}

// #include <stdio.h>
// void outputArray(int *p, int n);

// int main()
// {
//    int array[3] = {10, 20, 30};
//    int size = sizeof(array) / sizeof(array[0]);
//    outputArray(array, size);
// }

// void outputArray(int *p, int n)
// {
//    int i;
//    for (i = 0; i < n; i++)
//       printf("%d %d\n", p[i], *(p + i));
// }