#include <stdio.h>

main() {
FILE *fp;

fp= fopen("/tmp/test.txt", "w+");
fprintf(fp, "weather is cold\n");
fputs("This is testing for fputs\n", fp);
fclose(fp);
}
