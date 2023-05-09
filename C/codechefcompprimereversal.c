#include <stdio.h>
#include <string.h>
#define MAX_N 100000
int main() {
int t;
scanf("%d", &t);

while (t--) {
int n;
char s[MAX_N + 1];
scanf("%d%s", &n, s);

Copy code
// Initialize the minimum distance to the maximum possible value
int min_distance = n;

// Check the distance between every pair of 1s in the string
for (int i = 0; i < n; i++) {
  if (s[i] == '1') {
    for (int j = i + 1; j < n; j++) {
      if (s[j] == '1') {
        // Calculate the distance between the two 1s
        int distance = j - i;

        // Check if reversing the substring between the two 1s gives a smaller distance
        for (int k = i + 1; k < j; k++) {
          // Reverse the substring
          for (int l = 0; l < (j - k) / 2; l++) {
            char temp = s[k + l];
            s[k + l] = s[j - l - 1];
            s[j - l - 1] = temp;
          }

          // Calculate the new distance between the two 1s
          int new_distance = s[i] == '0' ? j - (i + 1) : j - i;

          // Update the minimum distance if necessary
          if (new_distance < distance) distance = new_distance;

          // Reverse the substring back to its original form
          for (int l = 0; l < (j - k) / 2; l++) {
            char temp = s[k + l];
            s[k + l] = s[j - l - 1];
            s[j - l - 1] = temp;
          }
        }

        // Update the minimum distance if necessary
        if (distance < min_distance) min_distance = distance;
      }
    }
  }
}

printf("%d\n", min_distance);
}

return 0;
}
