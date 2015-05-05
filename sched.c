#include <stdlib.h>
#include <stdio.h>
#include "schedLib.h"


void usage();

int main(int argc, char *argv[]) {
  char *option, *taskname, *filterRegex;
  int taskId;

  if (argc < 2) {
    usage();
  }

  option = argv[1];
  if(strcmp(option, "-s") == 0) {
    if (argc < 3) {
      usage();
    }
    taskname = argv[2];
    startTask(taskname);
  } else if(strcmp(option, "-p") == 0) {
    if (argc < 3) {
      usage();
    }
    taskId = atoi(argv[2]);
    pauseTask(taskId);
  } else if(strcmp(option, "-r") == 0) {
    if (argc < 3) {
      usage();
    }
    taskId = atoi(argv[2]);
    resumeTask(taskId);
  } else if(strcmp(option, "-l") == 0) {
    listTasks();
  } else if(strcmp(option, "-d") == 0) {
    if (argc < 3) {
      usage();
    }
    taskId = atoi(argv[2]);
    showDetails(taskId);
  } else if(strcmp(option, "-h") == 0) {
    if (argc < 3) {
      showHistory(NULL);
    } else {
      filterRegex = argv[2];
      showHistory(filterRegex);
    }
  } else {
    usage();
  }
  return 0;
}

void usage() {
  printf("%s%s%s%s%s%s%s",
      "Usage:\n",
      "sched -s <taskname>\n",
      "sched -p <taskId>\n",
      "sched -r <taskId>\n",
      "sched -l\n",
      "sched -d <taskId>\n",
      "sched -h [filterRegex]\n"
  );
  exit(1);
}
