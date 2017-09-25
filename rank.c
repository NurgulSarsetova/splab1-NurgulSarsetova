//Sarsetova Nurgul
//EN04B
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define _GNU_SOURCE
#include <stdio.h>
#define BUF 128
#define TOT 10

int compare(char* k, char* l)

{
    
    int i = 0;
    while ( k[i] != '\0' )
    {
        if( l[i] == '\0' ) { return 1; }
        else if( k[i] < l[i] ) { return -1; }
        else if( k[i] > l[i] ) { return 1; }
        i++;
    }
    if(l[i]=='\0')
        return 0;
    else
        return -1;
}
int main(int argc, char*argv[]){
    FILE *pg;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;
    char words[TOT][BUF];
    int i = 0;
    int t = 0;
    pg = stdin;
    while(fgets(words[i], BUF, pg)) {
        words[i][strlen(words[i]) - 1] = '\0';
        i++;
    }
    t = i;
    char *nf[t];
    for(i = 0; i < t; i++){
        printf("%s\n", words[i]);
        nf[i] = words[i];
    }
    printf("\n");
    for (int i = 0; i < t; i++){
        for (int j = i+1; j < t; j++){
            if (compare(nf[i],nf[j]) == 1){
                char *tmp = nf[i];
                nf[i] = nf[j];
                nf[j] = tmp;
            }
        }
    }
    if(argc > 1 && !strcmp(argv[1],"--reverse")){
        for(i = t-1; i >= 0; i--)
            printf("%s\n", nf[i]); 
    }else{
        for(i = 0; i < t; i++)
            printf("%s\n", nf[i]);
    }
    
    return 0;
}
