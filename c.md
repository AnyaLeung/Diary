* `malloc()`return a pointer to the allocated memory, reurn NULL if
fails 
* de-referencing a NULL pointer”:

up vote
43
down vote
accepted
A NULL pointer points to memory that doesn't exist. This may be address 0x00000000 or any other implementation-defined value (as long as it can never be a real address). Dereferencing it means trying to access whatever is pointed to by the pointer. The * operator is the dereferencing operator:


