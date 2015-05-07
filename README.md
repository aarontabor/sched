#Sched
Sched is a command-line progress tracking assistant to help you keep track of
how long it takes you to complete tasks. This can be very useful when tracking
hours for contract work or for making future estimates.

By telling sched when you start and stop focusing on particular tasks, it
calculates the amount of total time spent. Sched also keeps track of each
working session so you can always see full picture.

##Starting a new task
    sched -s "Task Name"

##Pausing an existing task
    sched -p "Task Name"

as an ease of use feature, you can also refer to a particular task by its
task id (See sched -l).

    sched -p <task id>

##Resuming an existing task
    sched -r ["Task Name" | <task id>]

##Ending a task
    sched -e ["Task Name" | <task id>]

##Show all existing tasks (with status)
    sched -l

>    Output:
> 
>    id  Task                 Status    Time Spent
>    === ==================== ========= ==========
>    1   Essay for School     ongoing   2:34
>    2   Math Assignment      paused    0:45
>    3   Reading - Chapter 4  ongoing   1:12

##Show the details of a specific task
    sched -d ["Task Name" | <task id>]

> Output:
> 
> Start            Stop             Duration
> ================ ================ ========
> 2015-01-16 12:04 2015-01-16 12:55 0:51
> 2015-01-16  2:36 2015-01-16  3:23 0:47
> 2015-01-17  9:08 2015-01-17 10:15 1:07
> 
> Total: 2:45

##Show history of tasks
    sched -h

> Output:
> 
> Task                 Completed  Time Spent
> ==================== ========== ==========
> Reading - Chapter 3  2015-01-10 2:34
> Math Assignment      2015-01-12 0:45
> Reading - Chapter 4  2015-01-15 1:12
> 
> Total: 4:31

You can also filter output by using a regex search pattern:

    sched -h <regex>

> Output:
> 
> Task                 Completed  Time Spent
> ==================== ========== ==========
> Reading - Chapter 3  2015-01-10 2:34
> Reading - Chapter 4  2015-01-15 1:12
> 
> Total: 3:46

This can be extremely useful for tracking purposes
