#include "low_uper_case.h"
#include <ctype.h>

char* toUpper(char* str) {
  for(char *p=str; *p; p++) *p=toupper(*p);
  return str;
}