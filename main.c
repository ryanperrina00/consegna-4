//authors Davide Merli, Giulia Tedeschi, Manuel Luizzietti, Ryan Perrina
//20191115
//....
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    unsigned int number_w;
    char *wordtoletter, *(letter[20]), *ptr;

    printf("Insert number of words...\n");
    scanf("%d",&number_w);
    fflush(stdin);
    wordtoletter=(char*)malloc(sizeof(char)*number_w*20);

    if(wordtoletter==NULL){
        printf("Not enough space!");
        exit (1);
    }
    ptr=wordtoletter;

    for(int i=0;i<number_w;i++){
        printf("Insert  a word...\n");
        gets(ptr);
        ptr+=20;
        fflush(stdin);
    }
    ptr=wordtoletter;
    printf("\n");
    for(int j=0;j<number_w;j++){
        puts(ptr);
        ptr+=20;
    }
    printf("\n");
    printf("Upper case words:\n");
    ptr=wordtoletter;

    for(int j=0;j<number_w;j++){
        char temporary[20];
        int i=0;
        strcpy(temporary, ptr);

        while(temporary[i]!='\0')
            {
            temporary[i]=toupper(temporary[i]);
            i++;
            }
        temporary[i]='\0';
        strcpy(ptr,temporary);
        puts(ptr);
        ptr+=20;
    }

    free(ptr);
    free(wordtoletter);
    printf("\n\nPress enter to continue.\n");
    getchar();
    return 0;
}
