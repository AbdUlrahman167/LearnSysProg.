#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
        char str[50];
        char strR[] = "exit";
        do {
 printf("Ana Gahez ya Basha > ");
        fgets(str,50,stdin);
        if (strcmp(str,strR) != 0)
                        printf("You said : %s\n",str);
                else
                        {printf("Good Bye :)\n");
            break;}
}
while(1);
                        return 0;
}
