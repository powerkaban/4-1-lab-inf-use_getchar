
#include <iostream>
#include <stdio.h>

int main()
{

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