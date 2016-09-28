#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include </home/thexcloud/PROGRAMMING/lab1/print_str.h>
#include </home/thexcloud/PROGRAMMING/lab1/get_name.h>

void main() {
  char hello[90] = "Hello, ";
  char* result;
  result = get_name();
  print_str(strncat(hello, result, 80));
  free(result);
}
