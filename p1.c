#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main(){

  printf("hello world (pid:%d)\n" , (int) getpid());
  int rc = fork();
  if (rc < 0){            //fork failed

        fprintf(stderr, "fork failed\n");
        exit(1);

  } else if ( rc == 0){

    printf("hello I am child (pid: %d)\n", (int) getpid());
    char *myargs[3];


    myargs[0] = strdup("wc");  // program 'wc ( workd count )
    myargs[1] = strdup("p1.c"); // argument: file to count
    myargs[2] = NULL; // marks end of array
    execvp(myargs[0], myargs); // runs word count, essentially we are typing into out 
                              //shell wc p1.c
    printf("this shouldnt print out");  
  }
  else{ // parent goes down this path ( main )

  int wc = wait(NULL);
  printf("hello, I am parent of %d (wc: %d) (pid: %d) \n", rc, wc , (int) getpid());

  }
  return 0;  
}