#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *fp;
    char text[100];
    char buffer[100];

    /*1. Open file for writing */
    fp = fopen("sample.txt" , "w");
    if (fp == NULL){
        printf("Error: Sample file cannot be opened")
    }

    /*2. Write a string to file */
    fputs("Hello World\n" , fp);

    /*3. Write binary data */
    strcpy(text, "This line is written using fwrite\n");
    fwrite(text, sizeof(char), strlen(text), fp);

    /*4. Open file for reading */
    fp = fopen("sample.txt" , "r");
    if (fp == NULL){
        printf("Error: Sample file cannot be opened");
    }

    /*5. Read line by line */
    while(fgets(buffer, sizeof(buffer), fp) != NULL){
        printf("%s", buffer);
    }

    /*6. Move pointer to beginning */
    fseek(fp,0,SEEK_SET);
    
    /*7. Read entire file */
    fread(buffer, sixeof(char), sizeof(buffer), fp);
    printf("%s", buffer);
    
    /*8. Check end of file */
    if (feof(fp)){
        printf("End of file reached\n");
    }
        
fclose(fp);
return 0;
}
