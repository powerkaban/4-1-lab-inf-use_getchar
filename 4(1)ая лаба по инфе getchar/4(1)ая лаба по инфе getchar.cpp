
#include <iostream>
#include <stdio.h>

// второе задание такое же только со считыванием файла 
int main() {
    setlocale(LC_ALL, "rus");
    FILE* file,* file2;
    fopen_s(&file, "myfile.txt", "r");
    char  b;
    fopen_s(&file2, "input.txt", "w");
    b = getchar();
    while (b != EOF)
    {
        if (b == ':')
        {
            while ((b != ':') || (b != EOF)) {

                b = getchar();
                fputs(file2);
                if (b == ':')
                    return 0;
                printf("%c", b);
            }
            return 0;
        }
        b = getchar();
    }
    fclose(file);

    fclose(file2);

}
//первое задание с двоеточием 
/*
int main()
 {
    int c ;
    int a = 0;
    c = getchar();
    while (c != EOF)
    {
        if (c ==':')
        {
            while ((c != ':')|| (c != EOF)) {

                c = getchar();
                if (c == ':')
                    return 0;
                printf("%c", c);
            }
                return 0;
        }
        c = getchar();
    }
 }
*/

/*
int main()
{
        //getchar putchr

        char MAX_STR;
        setlocale(LC_ALL, "rus");
        FILE *file, *file2;
        char  filename[10]{0};
        char c;
        int i = 0;
        int second = 0;
        fopen_s(&file, "myfile.txt", "r");
        printf("Ищем сколько двоеточий в файле ");

        if (file){
            while ((c = fgetc(file)) != EOF) {
                if (c == ':') {
                    while (((c = fgetc(file)) != EOF) && (c != ':')) {
                        filename[i] = c;
                        i++;
                    };
                }
            }
        }

        printf("разделение на две части");
        fclose(file);

        fopen_s(&file2, "input.txt", "w");

        fputs(filename, file2);

        fclose(file2);

}
*/
