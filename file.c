#include <stdio.h>
int main()
{
    char filename[60];
    printf("enter the file name:\n");
    scanf("%s", filename);
    FILE *new = fopen(filename, "a");
    if(new==NULL){
        printf("error opening in file!\n");
    }
    printf("enter your full name: ");
    char name[80];
    getchar();
    fgets(name,80,stdin);//new line 
    name[strcspn(name,"\n")] = '\0';
    fprintf(new,"%s\n",name);
    fclose(new);
}