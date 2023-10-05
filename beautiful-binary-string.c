#include <stdio.h>
#include <stdlib.h>

int beautifulBinaryString(char *b) {
  int count = 0;
  for (int i = 0; i < strlen(b) - 2; i++) {
    if (b[i] == '0' && b[i + 1] == '1' && b[i + 2] == '0') {
      count++;
      i += 2;
    }
  }

  return count;
}

int main() {
  int n;
  scanf("%d", &n);

  char b[n + 1];
  scanf("%s", b);

  int count = beautifulBinaryString(b);
  printf("%d\n", count);

  return 0;
}

