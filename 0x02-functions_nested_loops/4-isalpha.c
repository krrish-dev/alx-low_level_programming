#include "main.h"

int _isalpha(int c) {
  /* Check if `c` is a lowercase letter. */
  if (c >= 'a' && c <= 'z') {
    return 1;
  }

  /* Check if `c` is an uppercase letter. */
  if (c >= 'A' && c <= 'Z') {
    return 1;
  }

  /* Otherwise, return 0. */
  return 0;
}
