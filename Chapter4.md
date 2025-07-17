How to provide the illusion of many CPUs?
- Virtualizing the CPU: by running a process and then stopping it and then running another one, it provides the illusion that many virtual CPU's coexist when in reality there are only a physical one
This technique is called time-sharing,, the reason why we need to do is because the CPU can only execute 1 thread per core 

Process API which is available in every operating systems.

Wait: Some waiting interface to wait for a process to stop running 
Miscellaneous Control
Status



To start a process, the OS must first load the code and any static data into memory. Program reside on a disk in some excutable format, thus for the OS to launch the process it requires the OS to read the read the bytes from the program and place them in memory somewhere. 

A process can either be running , ready, blocked


Operating Systems are filled with various important data structures, an example of this would be the process list which keeps track of all the running programs in the systems.





Virtualziing the CPU entails giving the illusion of many CPU existing

What tis time and space sharing?

What are scheduling policiies?

What are registers?

What is the program counter?

What is the low-level mechanism

A program is a file on disk. The OS loads it into memory, creating a process. The CPU runs this process by executing instructions from the memory copy not the disk.

What is the stack used for ?

Whta is the heap used for?

What are the 3 default file descriptors of a process?

What are the different states a process can be?
Running, ready and blocked

Map these states onto a graph

When do processes get blocked?

What is the process list DS?

