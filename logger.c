#include "logger.h"
#include <stdlib.h>
#include <stdio.h>

void initLOGGER(const char Loglevel, const char *filename){
	logger_level = Loglevel;
	logger_file = filename;
}

void logDebug(const char *msg){

	if(logger_level >= LOG_DEBUG){

		//Create output String
		//Adding 1 because of the '\n` that will be added at the end of the line
		ssize_t len = strlen(msg) + strlen("DEBUG: ") + 1;
		
		//Adding 1 because of the '\0' that is stored in the array as well but shouldnt be printed into the file...
		char newMsg[len + 1];
		sprintf(newMsg, "DEBUG: %s\n", msg);
		const char *outputmsg = newMsg;
		int fd = open(logger_file, O_WRONLY|O_APPEND);
		if(fd < 0){
		      fd = open(logger_file, O_WRONLY|O_APPEND |O_CREAT, 0600 | S_IRGRP | S_IROTH);
		    if(fd < 0){
			 printf("failure whilst open %d", fd);
			return;
		    }
		}
		ssize_t written = write(fd, outputmsg, strlen(outputmsg));
		if(written < 0){
		    printf("failure whilst writing %d", written);
			//free(tm_struct);
			close(fd);
			return;
		}
		//free(tm_struct);
		close(fd);
		return;
	}
}
void logInfo(const char *msg){
  
  if(logger_level >= LOG_INFO){

		//Create output String
		//Adding 1 because of the '\n` that will be added at the end of the line
		ssize_t len = strlen(msg) + strlen("INFO: ") + 1;
		
		//Adding 1 because of the '\0' that is stored in the array as well but shouldnt be printed into the file...
		char newMsg[len + 1];
		sprintf(newMsg, "INFO: %s\n", msg);
		const char *outputmsg = newMsg;
		int fd = open(logger_file, O_WRONLY|O_APPEND);
		if(fd < 0){
		      fd = open(logger_file, O_WRONLY|O_APPEND |O_CREAT, 0600 | S_IRGRP | S_IROTH);
		    if(fd < 0){
			 printf("failure whilst open %d", fd);
			return;
		    }
		}
		ssize_t written = write(fd, outputmsg, strlen(outputmsg));
		if(written < 0){
		    printf("failure whilst writing %d", written);
			//free(tm_struct);
			close(fd);
			return;
		}
		//free(tm_struct);
		close(fd);
		return;
	}

}
void logImportant(const char *msg){
if(logger_level >= LOG_IMPORTANT){

		//Create output String
		//Adding 1 because of the '\n` that will be added at the end of the line
		ssize_t len = strlen(msg) + strlen("IMPORTANT: ") + 1;
		
		//Adding 1 because of the '\0' that is stored in the array as well but shouldnt be printed into the file...
		char newMsg[len + 1];
		sprintf(newMsg, "IMPORTANT: %s\n", msg);
		const char *outputmsg = newMsg;
		int fd = open(logger_file, O_WRONLY|O_APPEND);
		if(fd < 0){
		      fd = open(logger_file, O_WRONLY|O_APPEND |O_CREAT, 0600 | S_IRGRP | S_IROTH);
		    if(fd < 0){
			 printf("failure whilst open %d", fd);
			return;
		    }
		}
		ssize_t written = write(fd, outputmsg, strlen(outputmsg));
		if(written < 0){
		    printf("failure whilst writing %d", written);
			//free(tm_struct);
			close(fd);
			return;
		}
		//free(tm_struct);
		close(fd);
		return;
	}
}
void logWarn(const char *msg){
if(logger_level >= LOG_WARN){

		//Create output String
		//Adding 1 because of the '\n` that will be added at the end of the line
		ssize_t len = strlen(msg) + strlen("WARN: ") + 1;
		
		//Adding 1 because of the '\0' that is stored in the array as well but shouldnt be printed into the file...
		char newMsg[len + 1];
		sprintf(newMsg, "WARN: %s\n", msg);
		const char *outputmsg = newMsg;
		int fd = open(logger_file, O_WRONLY|O_APPEND);
		if(fd < 0){
		      fd = open(logger_file, O_WRONLY|O_APPEND |O_CREAT, 0600 | S_IRGRP | S_IROTH);
		    if(fd < 0){
			 printf("failure whilst open %d", fd);
			return;
		    }
		}
		ssize_t written = write(fd, outputmsg, strlen(outputmsg));
		if(written < 0){
		    printf("failure whilst writing %d", written);
			//free(tm_struct);
			close(fd);
			return;
		}
		//free(tm_struct);
		close(fd);
		return;
	}
}
void logError(const char *msg){
if(logger_level >= LOG_ERROR){

		//Create output String
		//Adding 1 because of the '\n` that will be added at the end of the line
		ssize_t len = strlen(msg) + strlen("ERROR: ") + 1;
		
		//Adding 1 because of the '\0' that is stored in the array as well but shouldnt be printed into the file...
		char newMsg[len + 1];
		sprintf(newMsg, "ERROR: %s\n", msg);
		const char *outputmsg = newMsg;
		int fd = open(logger_file, O_WRONLY|O_APPEND);
		if(fd < 0){
		      fd = open(logger_file, O_WRONLY|O_APPEND |O_CREAT, 0600 | S_IRGRP | S_IROTH);
		    if(fd < 0){
			 printf("failure whilst open %d", fd);
			return;
		    }
		}
		ssize_t written = write(fd, outputmsg, strlen(outputmsg));
		if(written < 0){
		    printf("failure whilst writing %d", written);
			//free(tm_struct);
			close(fd);
			return;
		}
		//free(tm_struct);
		close(fd);
		return;
	}
}
void logWtf(const char *msg){
if(logger_level >= LOG_WTF){

		//Create output String
		//Adding 1 because of the '\n` that will be added at the end of the line
		ssize_t len = strlen(msg) + strlen("WTF: ") + 1;
		
		//Adding 1 because of the '\0' that is stored in the array as well but shouldnt be printed into the file...
		char newMsg[len + 1];
		sprintf(newMsg, "WTF: %s\n", msg);
		const char *outputmsg = newMsg;
		int fd = open(logger_file, O_WRONLY|O_APPEND);
		if(fd < 0){
		      fd = open(logger_file, O_WRONLY|O_APPEND |O_CREAT, 0600 | S_IRGRP | S_IROTH);
		    if(fd < 0){
			 printf("failure whilst open %d", fd);
			return;
		    }
		}
		ssize_t written = write(fd, outputmsg, strlen(outputmsg));
		if(written < 0){
		    printf("failure whilst writing %d", written);
			//free(tm_struct);
			close(fd);
			return;
		}
		//free(tm_struct);
		close(fd);
		return;
	}
}

