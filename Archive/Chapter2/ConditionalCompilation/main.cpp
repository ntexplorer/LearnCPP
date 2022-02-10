#include <iostream>

#define PRINT_JOE

int main() {
#ifdef PRINT_JOE
    std::cout << "Joe\n"; // will be compiled since PRINT_JOE is defined
#endif

#ifdef PRINT_BOB
    std::cout << "Bob\n"; // will be ignored since PRINT_BOB is not defined
#endif

#if 0 // Don't compile anything starting here
    std::cout << "Bob\n";
    /* Some
     * multi-line
     * comment here
     * This also provides a convenient way to “comment out” code that contains multi-line comments (which can’t be
     * commented out using another multi-line comment due to multi-line comments being non-nestable)
     */
    std::cout << "Steve\n";
#endif // until this point

    return 0;
}