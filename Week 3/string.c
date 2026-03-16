#include <stdio.h>

int main() {

    // =========================================================
    // PART 1: String Literals
    // A string literal "..." is stored in read-only memory.
    // A char pointer points to that read-only location.
    // =========================================================

    char *literal = "Hello";
    printf("literal: %s\n", literal);
    printf("literal[0]: %c\n", literal[0]);

    // DANGER: modifying a string literal is UNDEFINED BEHAVIOUR.
    // On most systems this causes a segmentation fault.
    // literal[0] = 'J';  // <-- uncomment to demo crash


    // =========================================================
    // PART 2: String as a Char Array
    // The compiler copies the literal into a local array.
    // This copy lives on the stack and IS mutable.
    // =========================================================

    char str[] = "Hello";          // size inferred: 6 chars (includes '\0')
    printf("\nstr: %s\n", str);

    str[0] = 'J';                  // safe: modifying our own array copy
    printf("str after str[0]='J': %s\n", str);

    // You can also declare with an explicit (larger) size:
    char buf[20] = "Hello";        // remaining bytes are zero-initialised
    printf("\nbuf: %s\n", buf);


    // =========================================================
    // PART 3: The Null Terminator
    // Strings in C are terminated by '\0' (ASCII value 0).
    // printf("%s") stops printing when it hits '\0'.
    // =========================================================

    // Print each character of str including the null terminator
    printf("\nCharacters in str[] = \"Hello\":\n");
    for (int i = 0; i <= 5; i++) {
        printf("  str[%d] = '%c'  (decimal %d)\n", i, str[i], str[i]);
    }
    // str[5] is '\0' — it prints as empty but its value is 0


    // =========================================================
    // PART 4: Dangerous Behaviours — Missing Null Terminator
    // If we overwrite the '\0', printf keeps reading past the
    // end of our array looking for another '\0' — garbage output,
    // or a segmentation fault if it walks off the stack.
    // =========================================================

    char danger[6] = "Hello";      // danger[5] == '\0'
    printf("\nbefore: %s\n", danger);

    danger[5] = '!';               // DANGER: overwrites the null terminator
    // danger is no longer a valid C string — undefined behaviour below
    printf("after overwriting '\\0': %s\n", danger);  // may print garbage


    // =========================================================
    // PART 5: Buffer Overflow
    // Writing beyond the array bounds corrupts adjacent memory.
    // =========================================================

    char small[4] = "Hi!";         // small[3] == '\0'
    printf("\nsmall before overflow: %s\n", small);

    // DANGER: index 10 is way out of bounds — corrupts the stack
    // small[10] = 'X';            // <-- uncomment to demo memory corruption


    return 0;
}
