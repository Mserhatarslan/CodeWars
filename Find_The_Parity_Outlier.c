#include <stddef.h>
#include <stdio.h>

int find_outlier(const int values[/* count */], size_t count)
{
    int evenCount = 0;
    int oddCount = 0;
    int evenCandidate = 0;
    int oddCandidate = 0;

    for (int i = 0; i < (int) count; i++) {
        if (values[i] % 2 == 0) {
            evenCount++;
            evenCandidate = values[i];
        } else {
            oddCount++;
            oddCandidate = values[i];
        }

        if (evenCount > 1 && oddCount == 1) {
            return oddCandidate; 
        } else if (oddCount > 1 && evenCount == 1) {
            return evenCandidate; 
        }
    }

    return 0; 
}
