

Direct execution simply means running the program directly on the CPU.


Process: 
- Create entry for process list
- Allocate memory for program
- Load program into the memory
- Set up stack
- Execute call main()


Direct execution has the advantage of being fast however what if the process wishes to perform some kind of restricted operation.

The crux of the problem: A process must be able to perform some kind of restricted operations without giving the process complete control over the system, how can the OS and hardware work together to do so ?

To fight against this problem, we introduce a new processor mode called user mode where they are restricted in what they can do. 
In contrast to this is the kernel mode where the operating system (or kernel ) runs in. For a user to perform actions, they execute syscalls

To execute syscalls, a program must execute a trap instruction. Meaning the CPU jumps to the kernel where the system can now perform whatever priviliged operations are needed. After it is finished, the OS calls a return-from-trap instruction which reduces the privilige level back to user mode.

When booting up the computer, the kernel sets up a trap table where the OS tells the machine hwardware what code to run when certain events happen, such as a keyboard interrupt or a program making a system call. The OS will inform the hardware of the location of these trap handlers and will remember the location until it is next rebooted. 

The Next problem is switching between processes. If a process is unning on the CPU then it means that the OS is not running, does if the OS is not running how can it switch between processes.
2 methods:
- the process is making a syscall to to transfer the control from the CPU back to the OS
- setting up timer interrupt so that it interrupts every millisecond and gives the OS a bit of time to maintain control.

After the timer, the decision to continue the process or switch has to be made. This part is done by the scheduler. If the shceduler decides to switch, the OS performs low-level instructions we refer to as a context switch.



What are the two modes of execution a CPU should support?
- User mode and a privileged kernel mode

To use a syscall you must trap into the kernel

The trap instruction a hardware level instruction which switches from user mode to kernel mode.
It saves the register state carefully and jumps into the OS in a destination called the trap table.

after the syscall is finished another low level mechanism instruction called the return from trap instruction reduces the privilege and returns control to the instruction after the trap
that jumped into the OS 


limited direct execution protocol


How does the OS baby proof the CPU ?
