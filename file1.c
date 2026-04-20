#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *source, *target;
    char ch;

    source = fopen("source.txt" , "r");
    if (source == NULL){
        printf("Error: Cannot open the source file");
        exit(1);
    }
    target = fopen("target.txt" , "w");
    if (target == NULL){
        printf("Error: Cannot display the target file");
    }
    ch = fgetc(source);
    if (ch!= EOF){
        fputc(ch, target);
    }
    fclose(source);
    fclose(target);

    printf("Character copied successfully");
    return 0;
}
    
