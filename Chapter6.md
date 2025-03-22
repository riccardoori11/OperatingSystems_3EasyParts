To make the program run fast, developpers came up with a technique called direct execution.

Direct execution simply means running the program directly on the CPU.


Process: 
- Create entry for process list
- Allocate memory for program
- Load program into the memory
- Set up stack
- Execute call main()


Direct execution has the advantage of being fast however what if the process wishes to perform some kind of restricted operation.

The crux of the problem: A process must be able to perform some kind of restricted operations without giving the process complete control over the system, how can the OS and hardware work together to do so ? 
