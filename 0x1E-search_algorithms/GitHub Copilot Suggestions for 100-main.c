Synthesizing 10/10 solutions

=======
Suggestion 1

}
xxxx@xxxxxxxxxx gcc -Wall -Wextra -Werror -pedantic 100-main.c 100-jump.c -o j
xxxx@xxxxxxxxxx ./j
Found 6 at index: 6

Found 1 at index: 1

Found 999 at index: -1
xxxx@xxxxxxxxxx
```

**Repo:**

-   GitHub repository: `holbertonschool-low_level_programming`
-   Directory: `0x1E-search_algorithms`
-   File: `100-jump.c`

### 10. Big O #6

What is the time complexity of your implementation of jump search in the best case?

Write the big O notations in the file `10-O` (in ascending order).

**Repo:**

-   GitHub repository: `holbertonschool-low_level_programming`
-   Directory: `0x1E-search_algorithms`
-   File: `10-O`

### 11. Big O #7

What is the time complexity of your implementation of jump search in the average case?

Write the big O notations in the file `11-O` (in ascending order).

**Repo:**

-   GitHub repository: `holbertonschool-low_level_programming`
-   Directory: `0x1E-search_algorithms`
-   File: `11-O`

### 12. Big O #8

What is the space complexity of your implementation of jump search in the worst case?

Write the big O notations in the file `12-O` (in ascending order).

**Repo:**

-   GitHub repository: `holbertonschool-low_level_programming`
-   Directory: `0x1E-search_algorithms`
-   File: `12-O`

---

## Author

-   **Manuel Torres Vesga** - [matcls](

=======
Suggestion 2

}
```
```
xxxx@xxxxxxxxxxxxxxxxxxxxxxxxx gcc -Wall -Wextra -Werror -pedantic 100-main.c 100-jump.c -o 100-jump
xxxx@xxxxxxxxxxxxxxxxxxxxxxxxx ./100-jump
Found 6 at index: 6

Found 1 at index: 1

Found 999 at index: -1
xxxx@xxxxxxxxxxxxxxxxxxxxxxxxx
```
**Repo:**

-   GitHub repository: `holbertonschool-low_level_programming`
-   Directory: `0x1E-search_algorithms`
-   File: `100-jump.c`

=======
Suggestion 3

}
```

```sh
$ gcc -Wall -Wextra -Werror -pedantic 100-main.c 100-jump.c -o 100-jump
$ ./100-jump
Found 6 at index: 6

Found 1 at index: 1

Found 999 at index: -1
$
```

**Repo:**

* GitHub repository: search_algorithms
* File: 100-jump.c

### 101. Big O #6

What is the time complexity of a jump search in an array of size n, using step of size sqrt(n)?

Write the Big O notations of the time complexity of the jump search algorithm with this step.

**Repo:**

* GitHub repository: search_algorithms
* File: 101-O

### 102. Interpolation search

Write a function that searches for a value in a sorted array of integers using the Interpolation search algorithm

* Prototype : int interpolation_search(int *array, size_t size, int value);
* Where array is a pointer to the first element of the array to search in
* size is the number of elements in array
* And value is the value to search for
* Your function must return the first index where value is located
* You can assume that array will be sorted in ascending order
* If value is not present in array or if array is NULL, your function must return -1
* To determine the probe position, you can use : size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]))
* Where low and high are the current low and high boundaries of the array
* If value is bigger than the last element of the array, pos will be higher than the last index
* Once you have the probe position, you need to make a comparison to know where to continue searching in the subarray between low and high
* If value is equal to the element at pos, return pos
* If value is greater than the element at pos, search in the right subarray
* If value is smaller than the element at pos, search in the left subarray
* Every time you split the array, you have to print the new array (or subarray) you’re searching in (See example)
* You must use the Interpolation search algorithm
* You can only use printf in the main file

=======
Suggestion 4

}
```

```bash
xxxx@xxxxxxxxxxxxxxxxxxxxxxxxx gcc -Wall -Wextra -Werror -pedantic 100-main.c 100-jump.c -o 100-jump
xxxx@xxxxxxxxxxxxxxxxxxxxxxxxx ./100-jump
Found 6 at index: 6

Found 1 at index: 1

Found 999 at index: -1
xxxx@xxxxxxxxxxxxxxxxxxxxxxxxx
```

**Repo:**

* GitHub repository: `holbertonschool-low_level_programming`
* Directory: `0x1E-search_algorithms`
* File: `100-jump.c`

### 101. Interpolation search

Write a function that searches for a value in a sorted array of integers using the Interpolation search algorithm

* Prototype: `int interpolation_search(int *array, size_t size, int value);`
* `array` is a pointer to the first element of the array to search in
* `size` is the number of elements in `array`
* `value` is the value to search for
* Your function must return the first index where `value` is located
* You can assume that `array` will be sorted in ascending order
* If `value` is not present in `array` or if `array` is `NULL`, your function must return `-1`
* To compile your function, use the `-lm` flag. Example: `gcc -Wall -Wextra -Werror -pedantic 101-main.c 101-interpolation.c -lm -o 101-interpolation`
* You can assume that `size` can be very large. You can assume that `size` can be very large. And you can assume that `value` can be negative

```c
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 6, interpolation_search(array, size, 6));
    printf("Found %d at index:

=======
Suggestion 5

}
```

```sh
xxxx@xxxxxxxxxxxxxxxxxxxxxxxxx gcc -Wall -Wextra -Werror -pedantic 100-main.c 100-jump.c -o 100-jump
xxxx@xxxxxxxxxxxxxxxxxxxxxxxxx ./100-jump
Found 6 at index: 6

Found 1 at index: 1

Found 999 at index: -1
```

**Repo:**

* GitHub repository: `holbertonschool-low_level_programming`
* Directory: `0x1E-search_algorithms`
* File: `100-jump.c`

### 101. Interpolation search

Write a function that searches for a value in a sorted array of integers using the Interpolation search algorithm

* Prototype : `int interpolation_search(int *array, size_t size, int value);`
* Where `array` is a pointer to the first element of the array to search in
* `size` is the number of elements in `array`
* And `value` is the value to search for
* Your function must return the first index where value is located
* You can assume that `array` will be sorted in ascending order
* If `value` is not present in `array` or if `array` is `NULL`, your function must return `-1`
* Every time you compare a value in the array to the value you are searching, you have to calculate the new size of the array you have to search in. Once you know the new size, you just have to use the position to make a linear search again
* You need to use the Interpolation search algorithm

```c
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 6, interpolation_search(array, size, 6));
    printf("Found %d at index: %d\n\n", 1, interpolation_search(array, size, 1));
    printf("Found %d at index: %d\n

=======
Suggestion 6

}
xxxx@xxxxxxxxxxxxxxxxxxxxxxxxx gcc -Wall -Wextra -Werror -pedantic 100-main.c 100-jump.c -o 100-jump
xxxx@xxxxxxxxxxxxxxxxxxxxxxxxx ./100-jump
Value checked array[0] = [0]
Value checked array[3] = [3]
Value checked array[6] = [6]
Value found between indexes [6] and [9]
Value checked array[6] = [6]
Value checked array[7] = [7]
Value checked array[8] = [8]
Value checked array[9] = [9]
Found 6 at index: 6

Value checked array[0] = [0]
Value found between indexes [0] and [3]
Value checked array[0] = [0]
Value checked array[1] = [1]
Found 1 at index: 1

Value checked array[0] = [0]
Value checked array[3] = [3]
Value checked array[6] = [6]
Value found between indexes [6] and [9]
Value checked array[6] = [6]
Value checked array[7] = [7]
Value checked array[8] = [8]
Value checked array[9] = [9]
Found 999 at index: -1
xxxx@xxxxxxxxxxxxxxxxxxxxxxxxx 

```
**Repo:**

* GitHub repository: `holbertonschool-low_level_programming`
* Directory: `0x1E-search_algorithms`
* File: `100-jump.c`

### 11. Interpolation search

Write a function that searches for a value in a sorted array of integers using the Interpolation search algorithm

- Prototype : int interpolation_search(int *array, size_t size, int value);
- Where array is a pointer to the first element of the array to search in
- size is the number of elements in array
- And value is the value to search for
- Your function must return the first index where value is located
- You can assume that array will contain only ascending order sorted integers
- If value is not present in array or if array is NULL, your function must return -1
- To compile the above example, you can use the following command: gcc -Wall -Wextra -Werror -pedantic 102-main.c

=======
Suggestion 7

}
```

```sh
xxxx@xxxxxxxxxxxxxxxxxxxxxxxxx gcc -Wall -Wextra -Werror -pedantic 100-main.c 100-jump.c -o 100-jump
xxxx@xxxxxxxxxxxxxxxxxxxxxxxxx ./100-jump
Found 6 at index: 6

Found 1 at index: 1

Found 999 at index: -1
```

**Repo:**

* GitHub repository: `holbertonschool-low_level_programming`
* Directory: `0x1E-search_algorithms`
* File: `100-jump.c`

### 101. Interpolation search

Write a function that searches for a value in a sorted array of integers using the Interpolation search algorithm

* Prototype : `int interpolation_search(int *array, size_t size, int value);`
* Where `array` is a pointer to the first element of the array to search in
* `size` is the number of elements in `array`
* And `value` is the value to search for
* Your function must return the first index where `value` is located
* If `value` is not present in `array` or if `array` is `NULL`, your function must return `-1`
* To compile your function, please use the following source code:
```c
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 6, interpolation_search(array, size, 6));
    printf("Found %d at index: %d\n\n", 1, interpolation_search(array, size, 1));
    printf("Found %d at index: %d\n", 999, interpolation_search(array, size, 999));
    return (EXIT_SUCCESS);
}
```

```sh
xxxx@xxxxxxxxxxxxxxxxxxxxxxxxx gcc -Wall -Wextra -Werror -pedantic 101-main.c 101-interpolation.c -o 101-interpolation
alex

=======
Suggestion 8

}
```
```
xxxx@xxxxxxxxxxxxxxxxxxxxxxxxx gcc -Wall -Wextra -Werror -pedantic 100-main.c 100-jump.c -o 100-jump
xxxx@xxxxxxxxxxxxxxxxxxxxxxxxx ./100-jump
Found 6 at index: 6

Found 1 at index: 1

Found 999 at index: -1
xxxx@xxxxxxxxxxxxxxxxxxxxxxxxx
```
**Repo:**

* GitHub repository: `holbertonschool-low_level_programming`
* Directory: `0x1E-search_algorithms`
* File: `100-jump.c`

=======
Suggestion 9

}
```

```c
xxxx@xxxxxxxxxxxxxxxxxxxxxxxxx gcc -Wall -Wextra -Werror -pedantic 100-main.c 100-jump.c -o 100-jump
xxxx@xxxxxxxxxxxxxxxxxxxxxxxxx ./100-jump
Found 6 at index: 6

Found 1 at index: 1

Found 999 at index: -1
xxxx@xxxxxxxxxxxxxxxxxxxxxxxxx
```

**Repo:**

-   GitHub repository: `holbertonschool-low_level_programming`
-   Directory: `0x1E-search_alalgorithms`
-   File: `100-jump.c`

=======
Suggestion 10

}
xxxxxx@xxxxxx:~/0x1E. Search_algorithms$ gcc -Wall -Wextra -Werror -pedantic 100-main.c 100-jump.c -o 100-jump
xxxxxx@xxxxxx:~/0x1E. Search_algorithms$ ./100-jump
Value checked array[3] = [3]
Value found between indexes [3] and [4]
Value checked array[3] = [3]
Value checked array[4] = [4]
Value checked array[5] = [5]
Value checked array[6] = [6]
Value checked array[7] = [7]
Value checked array[8] = [8]
Found 6 at index: 6

Value checked array[3] = [3]
Found 1 at index: 1

Value checked array[3] = [3]
Value checked array[4] = [4]
Value checked array[5] = [5]
Value checked array[6] = [6]
Value checked array[7] = [7]
Value checked array[8] = [8]
Value checked array[9] = [9]
Found 999 at index: -1
xxxxxx@xxxxxx:~/0x1E. Search_algorithms$
```
**Repo:**

* GitHub repository: `holbertonschool-low_level_programming`
* Directory: `0x1E-search_algorithms`
* File: `100-jump.c`
### 101. Interpolation search
Write a function that searches for a value in a sorted array of integers using the Interpolation search algorithm

* Prototype : int interpolation_search(int *array, size_t size, int value);
* Where array is a pointer to the first element of the array to search in
* size is the number of elements in array
* And value is the value to search for
* Your function must return the first index where value is located
* You can assume that array will be sorted in ascending order
* If value is not present in array or if array is NULL, your function must return -1
* To compile the above example, you can use the following command:
```
xxxxxx@xxxxxx:~/0x1E. Search_algorithms$ gcc -Wall -Wextra -Werror -pedantic 101-main.c 101-interpolation.c -o 101-interpolation
