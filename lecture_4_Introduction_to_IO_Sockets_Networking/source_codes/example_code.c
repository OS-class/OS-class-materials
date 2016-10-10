#include <stdio.h>
#include <string.h>

#define BUFLEN 256
FILE *outfile;
char mybuf[BUFLEN];

int storetofile() {
  char *instring;

  outfile = fopen("tokens", "w+");
  if (!outfile)
    return (-1);    // Error!
  while (1) {
    instring = fgets(mybuf, BUFLEN, stdin); // catches overrun!

    // Check for error or end of file (^D)
    if (!instring || strlen(instring)==0) break;

    // Write string to output file, exit on error
    if (fputs(instring, outfile)< 0) break; 
  }	
  fclose(outfile);  // Flushes from userspace
}


int main(){
	storetofile();
}
