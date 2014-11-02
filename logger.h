#ifndef LOGGER_MAIN_HEADER

#define LOGGER_MAIN_HEADER
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <time.h>

#define LOGGER_VERSION 1.0
#define LOG_DEBUG 1
#define LOG_INFO 2
#define LOG_IMPORTANT 3
#define LOG_WARN 4
#define LOG_ERROR 5
#define LOG_WTF 6

static char logger_level;
static const char *logger_file;
void initLOGGER(const char Loglevel, const char *filename);


void logDebug(const char *msg);
void logInfo(const char *msg);
void logImportant(const char *msg);
void logWarn(const char *msg);
void logError(const char *msg);
void logWtf(const char *msg);


#endif
