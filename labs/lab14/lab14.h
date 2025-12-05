#include<stdio.h>
#include<stdlib.h>

enum Status {
    STATUS_OK,
    STATUS_WARNING,
    STATUS_ERROR
};

struct Reading {
    int id;
    double value;
    enum Status status;
};

struct Reading *createReadings(int count);
void initReading(struct Reading *r, int id, double value, enum Status status);
int countByStatus(const struct Reading *readings, int count, enum Status status);
void freeReadings(struct Reading *readings);

#ifdef HONORS
struct Reading *filterByStatus(const struct Reading *readings,
                               int count,
                               enum Status status,
                               int *outCount);
#endif
