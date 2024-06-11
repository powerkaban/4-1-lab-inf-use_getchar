
#include <iostream>
#include <stdio.h>

int main()
{

        string MAX_STR;
        setlocale(LC_ALL, "rus");
        FILE* file, * file2;
        char c, sy, filename[80];
        fopen_s(&file, "hello.txt", "r");
        int i = 0;
        printf("Symbol:");
        scanf_s("%c", &sy);
        while ((c = fgetc(file)) != EOF) {
            if (c == sy) {
                i++;
            }
        }

        printf("%d", i);
        fclose(file);
        fopen_s(&file2, "hello2.txt", "w");
        if (file2 != 0)
            fprintf(file2, "коллиество букв в файле %d", i);
        if (file2 == NULL)
        {
            printf("Error!");
        }
        else
        {
            while (!feof(file2))
            {
                MAX_STR = fgetc(file2);
                puts(str);
            }
        }
        fclose(file2);
    }
}
/*

char str[] = "abc:def:ghi";
    char* firstColon = strchr(str, ':');
    if (firstColon != NULL) {
        char* secondColon = strchr(firstColon + 1, ':');
        if (secondColon != NULL) {
            int length = secondColon - firstColon - 1;
            char result[length + 1];
            strncpy(result, firstColon + 1, length);
            result[length] = '\0';
            printf("%s\n", result);
        }
        else {
            printf("%s\n", firstColon + 1);
        }
    }*/