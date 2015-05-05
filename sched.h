#include <time.h>


#define MAX_STRING_LENGTH 128


typedef enum Status {
  RUNNING, PAUSED, FINISHED
} Status;

typedef struct Task {
  int id;
  Status status;
  char taskName[MAX_STRING_LENGTH];
} Task;

typedef struct Stamp {
  int id;
  time_t timestamp;
} Stamp;
