### Week 2


- Scope
	- **Global Variable:** Accessible from any function within the file, retaining its value throughout the program's execution.
	- **Local Variable:** Defined within a function, accessible only within that function, and reinitialized upon each function call.
	- **Static Variable:** Retains its value between function calls, accessible only within the function it is defined in, limiting its scope but not its lifetime.
- pointers 
	- Type : 
		- `int* a;  int *a;  int * a;`  
	- * : dereference operator -- the star of dereferencing 
	- & : address-of operator 
	- exercise : write `void swap(int *a, int *b)` 
		- Ed chap6 intswap
- Arrays
	- Declare : `int numbers[10];` `int nums[MAXNUM];`
		- This does NOT initialise the array -- All 'garbage' values in here at the moment! 
			- can initialise arrays using array initialisation syntax:
				`int numbers[10] = {10};`
				`int numbers[] = { 10, 2, 4, 5 };`
		- Arrays must have a positive size, and the size **cannot change** after it has been declared. Hence, the size of the array must be known before declaring it
			- What if we don't know the size? 
			- What if we want to save memory? 
	- Indexing : `numbers[1] = 6; `
	- No length/size functions
		- How do we get the length of an array then? 
	- Array variables -- example array.c
		- `int A[] = {10, 20, 30, 40, 50}`
		- What is `A`? `*A`? `A+3`?  -- example array.c
		- `*(A + i)  => *(A + i * sizeof(*A))`


- Strings
	- Char array + null terminated
	- More next week




### Next week
- Strings 
- Big-O 
