CC = gcc
SRC = src/main.c src/queue.c src/task.c src/scheduler.c
OUT = task_scheduler

all:
	$(CC) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)
