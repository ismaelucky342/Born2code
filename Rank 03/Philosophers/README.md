# Philosophers
![image](https://github.com/user-attachments/assets/bf5de510-6853-4d9d-8302-0a4dc3279d66)


This project implements the classic solution to the **Dining Philosophers Problem**, where five philosophers sit at a round table. Each philosopher needs two forks (in this case called chopsticks) to eat a plate of spaghetti, and there is one shared chopstick between each pair of plates. Philosophers alternate between **thinking** and **eating**. When they feel hungry, they try to pick up the chopstick on their left, followed by the one on their right. If they manage to pick up both chopsticks, they eat for a short period, then put the chopsticks down and return to thinking.



# The Project
<div align="center">
  <img src="https://github.com/user-attachments/assets/e9cec3d6-5d9f-4ad7-984a-ceb9316b178b" alt="image">
</div>
There are two implementations in this project:

- **philo**: uses threads and mutexes for shared resource synchronization.
- **philo_bonus**: uses processes and semaphores to manage shared resources.

Each implementation is located in a separate directory: `philo/` for the version with threads and mutexes, and `philo_bonus/` for the version with processes and semaphores.



## Description of Each Version

### philo (Threads and Mutexes)

In this version, each philosopher is a thread, and each chopstick is represented by a mutex. Mutexes help prevent race conditions by blocking access to shared resources.



### Usage:

```bash
$> make 
$> ./philo number_of_philosophers time_to_die time_to_eat time_to_sleep [number_of_times_each_philosopher_must_eat]

```

- **number_of_philosophers**: number of philosophers (and chopsticks).
- **time_to_die**: time in milliseconds a philosopher can go without eating before they die.
- **time_to_eat**: time in milliseconds a philosopher spends eating.
- **time_to_sleep**: time in milliseconds a philosopher spends sleeping after eating.
- **number_of_times_each_philosopher_must_eat** (optional): number of times each philosopher must eat before the program exits.

### Example Execution:

```bash
$> ./philo 4 500 200 200
```

### philo_bonus (Processes and Semaphores)

In this version, each philosopher is a process, and each chopstick is managed by a semaphore. **Shared memory** and **signals** coordinate between processes and ensure each process can access the resources it needs.

### Usage:

```bash
$> make bonus
$> ./philo_bonus number_of_philosophers time_to_die time_to_eat time_to_sleep [number_of_times_each_philosopher_must_eat]

```

## Summary of Features and Requirements

| Implementation | Synchronization | Authorized Functions | Directory |
| --- | --- | --- | --- |
| `philo` | Threads and mutexes | `memset`, `printf`, `malloc`, `free`, `write`, `usleep`, `gettimeofday`, `pthread_create`, `pthread_detach`, `pthread_join`, `pthread_mutex_init`, `pthread_mutex_destroy`, `pthread_mutex_lock`, `pthread_mutex_unlock` | `philo/` |
| `philo_bonus` | Processes and semaphores | `memset`, `printf`, `malloc`, `free`, `write`, `fork`, `kill`, `exit`, `pthread_create`, `pthread_detach`, `pthread_join`, `usleep`, `gettimeofday`, `waitpid`, `sem_open`, `sem_close`, `sem_post`, `sem_wait`, `sem_unlink` | `philo_bonus/` |

## Installation

To compile each version, run `make` in the respective directory:

```bash
$> make        # Compiles the version with mutexes
$> make bonus  # Compiles the version with semaphores
```

Both implementations are independent, so you can compile and run either according to your needs.

## Debugging

Multithreaded applications can have complex issues due to the concurrent access to shared resources. To ensure the program runs without issues like race conditions, deadlocks, or memory leaks, it is essential to use debugging tools that specialize in these areas. Below are two recommended tools for debugging this project:

### 1. Valgrind with Helgrind

**Valgrind** is a tool used for memory debugging, memory leak detection, and profiling. **Helgrind** is one of its tools designed specifically for multithreaded programs, helping to detect race conditions and other threading issues.

### Why use Helgrind?

Helgrind checks for data races, where two or more threads access shared data simultaneously, with at least one of them writing to it. Data races can cause unexpected behavior and hard-to-reproduce bugs.

### How to use Helgrind

To run Helgrind, compile your program with debug symbols (add `-g` to your compilation flags in the `Makefile`), then run:

```bash
$ valgrind --tool=helgrind ./philo [arguments]
```

Replace `[arguments]` with the actual parameters you want to pass to the program, such as `number_of_philosophers`, `time_to_die`, etc.

### Example:

```bash
$ valgrind --tool=helgrind ./philo 4 500 200 200
```

Helgrind will analyze the program's memory accesses, checking for concurrent access issues, and report potential data races or lock order violations (which can lead to deadlocks). This helps identify where and how the program might be accessing shared resources unsafely.

### 2. Thread Sanitizer (TSAN)

**Thread Sanitizer** is a runtime analysis tool available with `gcc` and `clang`, designed to detect data races in multithreaded C and C++ programs. It’s particularly helpful in identifying bugs related to incorrect thread synchronization.

### Why use Thread Sanitizer?

TSAN can detect data races, deadlocks, and mutex misuses, and it’s optimized for speed, so it’s often faster than Helgrind. Since TSAN checks happen at runtime, it provides precise locations for where race conditions or synchronization issues occur in the code.

### How to use Thread Sanitizer

To enable Thread Sanitizer, add the `-fsanitize=thread` flag to both your compile and link commands in the `Makefile`. Here’s an example of how you might modify your `CFLAGS`:

```makefile
makefile
Copiar código
CFLAGS = -Wall -Wextra -Werror -fsanitize=thread -g

```

Then compile and run your program as usual:

```bash
$ ./philo [arguments]

```

### Example:

```bash
$ ./philo 4 500 200 200

```
While running, TSAN will output warnings if it detects any race conditions or misuse of synchronization primitives. This allows you to pinpoint and resolve the exact lines of code that could lead to concurrency issues.


## Extras

This project is an exercise in synchronization and concurrency management, with the goal of preventing **deadlocks** and **race conditions** when using shared resources among multiple threads or processes.

-Born2code
![42madrid](https://github.com/ismaelucky342/Born2code/assets/153450550/3a377f34-9156-4eff-b04b-71c4b128523e)
