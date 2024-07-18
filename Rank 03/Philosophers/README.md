# Philosophers
# Philosophers

![image](https://github.com/user-attachments/assets/e9cec3d6-5d9f-4ad7-984a-ceb9316b178b)

The problem of the philosophers' dinner. Five philosophers sit at a table. Everyone has a plate of spaghetti. Spaghetti is so slippery that a philosopher needs two forks (in our case called chopsticks) to eat it. Between every two plates there is a "chopstick", therefore there are the same number of philosophers as there are chopsticks.
The life of a philosopher consists of alternating periods of eating and thinking. When a philosopher feels hungry, he tries to pick up the left stick and if he gets it, he tries the right one. If he manages to grab two chopsticks he takes a few bites and then puts down the cutlery and continues thinking.

The solution to this problem is based on implementing an efficient algorithm for handling semaphores and shared memory.Each philosopher is considered a process and each toothpick is considered a resource. So, for a process to access the resource it needs, we have to consider each toothpick as a traffic light. This semaphore is binary and is 0 if the stick is being used by another process and 1 if the stick is available.

### How to use: 
```
$> make 
```
```
$> ./philo_one number_philosopher time_to_die time_to_eat time_to_sleep [number_of_time_each_philosophers_must_eat] arguments in square brackets are not required (number_of_time_each_philosophers_must_eat)
```
#### example: 
```
$>./philo_one 4 500 200 200
```
