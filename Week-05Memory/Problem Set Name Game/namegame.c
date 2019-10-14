/*all header files, function names (except main()), variable declaration information,
double quotes, and new line notation have been removed
from this file. Ignore the colorization until you're ready to
run the code.*/

/*call the .h files you need*/
#include <stdio.h>
#include <string.h>
/*enter your first and last name as char variables*/
int main() {

char *A = "Dillan" ;
char *B = "Hoyos";

if(strcmp (A, B) == 0)
{  printf("they are the SAME\n");
}
else
{
  printf("they are not the same\n");
}
}
