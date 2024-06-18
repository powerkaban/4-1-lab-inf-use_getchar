
#include <iostream>
#include <stdio.h>

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
int main2() {
    setlocale(LC_ALL, "rus");
    FILE* file,* file2;
    fopen_s(&file, "myfile.txt", "r");
    int b;
    b = getchar();
    while()
}



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
