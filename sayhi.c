//Sarsetova Nurgul
//3EN04B
#include <stdio.h>  
#include <stdlib.h>    
#include <getopt.h>

int main(int argc, char **argv)
{ 
  int c;
   
 int digit_optind = 0;
   char *word = NULL; 
 while (1) {
     
   int this_option_optind = optind ? optind : 1;
  
      int index = 0;
  
      static struct option long_options[] = {
   
         {"kazakh",  no_argument, 0,  0 },
      
      {"russian",  no_argument, 0,  0 },
   
         {"english",  no_argument, 0,  0 },
   
         {"name",  required_argument, 0,  0 },
    
        {0,         0,                 0,  0 }
 
       };

      
 c = getopt_long(argc, argv, "kren:",
  
               long_options, &index);
   
     if (c == -1)
    
        break;

  
     switch (c) {     
case 'k':
 word= "salem";     
  printf("%s ",word);
 
           break;

     
  case 'r':
       
     word = "privet";
   
         printf("%s ",word);
  
          break;

      
 case 'e':
         
   word = "hello";
       
     printf("%s ",word);
   
         break;
         
   
       case 'n':
 
           printf("%s ",word);
 
           break;

  
     case '?':
   
         break;

    
   default:
      
      printf("?? getopt returned character code 0%o ??\n", c);
    
    }
        
            
if (argv[0]=="./sayhi")
	 
   printf("hi\n");
  
  else if (argv[0]=="./sayprivet")
	
    printf("privet\n");
  
  else if (argv[0]=="./saysalem")

	    printf("salem\n");
    
    
}
}
