//Nutthanicha Yongpoomputta 5888090
//Inthukorn Limpachaveng 5888261
// section 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <unistd.h>
#include<pthread.h>
#define BUFFER_SIZE 100

int main(int argc, char *argv[]){
    int pro,con,size,num[100],n,i // #of producer,#of consumer,stack size
    pro = atoi(argv[1]);
    con = atoi(argv[2]);
    size = atoi(argv[3]);
    // input file name
    FILE* input;
    input =  fopen(argv[4],"r");
    if (input == NULL)
    {
        printf("Could not open file %s", argv[4]);
        return 0;
    }
    // read value in the file
    fscanf(input,"%d", &n);
    for (i=0;i<=n;i++){
        fscanf(input,"%d",&num[i]);
    }
    fclose(input);

    
    //create producer
   for(i=0;i<pro;i++){
    pthread_create(); 
   
   }
    
   //create consumer
   for(i=0;i<con;i++){
   pthread_create(); 

   }
    

    printf("DONE");
    exit(0);

}

//Producer method
/*void Producer(void *param) {
       while(true){
       

      }

      pthread_exit(NULL);
}

//Consumer method

void Consumer(void *param) {
       

     
     pthread_exit(NULL);
}*/
