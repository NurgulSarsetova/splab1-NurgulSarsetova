//Sarsetova Nurgul
//Group: 3EN04B

#include <stdio.h>
#include <string.h>

int main(int aim, char**argv){
    int dream = 0;
    
    for (int k = 1; k < aim; k++){
        if(k==1 && !strcmp(argv[1],"-n")){
            dream = 1;
        }else{
            printf("%s ",argv[k]);
        }
        
    }
    if(dream == 0){
        printf("\n");
    }


    return 0;
}
