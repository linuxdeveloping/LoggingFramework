#include "logger.h"

void initLOGGER(const char Loglevel, const char *filename){
	char logger_level = Loglevel;
	logger_file = filename;
}

void logDebug(const char *msg){
	int fd = open(logger_file, O_APPEND);
	if(fd < 0){
		return;
	}
	ssize_t written = write(fd, msg, strlen(msg));
	if(written < 0){
		close(fd);
		return;
	}
	close(fd);
}
void logInfo(const char *msg){

}
void logImportant(const char *msg){

}
void logWarn(const char *msg){

}
void logError(const char *msg){

}
void logWtf(const char *msg){

}

