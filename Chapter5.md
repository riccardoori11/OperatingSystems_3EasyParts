The fork() system call is used to create a new process.
When it is called, the parent process continues and the child process is created as a near-identical copy of the parent.
Where both processes will then execute the code right after the fork() line, this means that OS will duplicate the entire process. The key difference will be the PID and the return value from fork.

The PID is known as the process identifier 

Since they are 2 active running processes, the ouput isnt always deterministic thus to we can then invoe the wait() which will wait for the child to finish it's process first. (assuming that the wait is inside block for the parent )




What is the PID

What syscall would we use to create a new process

What syscall would we use to wait for a child to finish executing and resume the parent process

What is the exec()

What are signals ?


