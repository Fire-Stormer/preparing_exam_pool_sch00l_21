#include <stdio.h>
#include <string.h>
int main() {
  char string[25], reverse_string[25] = {'\0'};
  int i, length = 0, flag = 0;
  scanf("%s", string);
  for (i = 0; string[i] != '\0'; i++) {
    length++;
  }
  for (i = length - 1; i >= 0; i--) {
    if (string[i] < 91)
      string[i] = string[i] + 32;
    reverse_string[length - i - 1] = string[i];
  }
  for (flag = 1, i = 0; i < length; i++) {
    if (reverse_string[i] != string[i])
      flag = 0;
  }
  if (flag == 1)
    printf("YES");
  else
    printf("NO");
}
