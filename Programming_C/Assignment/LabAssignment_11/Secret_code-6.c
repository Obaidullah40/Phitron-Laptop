#include <stdio.h> 

int main() {
  int t;
  scanf("%d", &t);
  for (int k = 0; k <= t; k++)
  {
    int n, c = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            c++;
        }
    }

    if (c == 2) {
            printf("Yes\n");
    }
    else {
            printf("No\n");
    }
  }

      return 0;    
}

