# CPU Task Scheduler Simulator (C)

A C program that simulates CPU task scheduling using a queue data structure. The system manages multiple tasks in FIFO (First In First Out) order and demonstrates basic operating system scheduling.

---

## Features

- Add tasks to queue  
- Process tasks in FIFO order  
- Display task queue  
- Remove completed tasks  

---

## Project Structure
task-scheduler/
│
├── src/
│ ├── main.c
│ ├── queue.c
│ ├── task.c
│ └── scheduler.c
│
├── include/
│ ├── queue.h
│ ├── task.h
│ └── scheduler.h
│
├── Makefile
└── .gitignore


---

## How It Works

Tasks are added into a queue using enqueue operation. The scheduler processes tasks in FIFO order, removing each task after execution. This simulates basic CPU scheduling behavior used in operating systems.
