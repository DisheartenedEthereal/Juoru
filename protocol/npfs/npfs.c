#include "npfs.h"
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void npfs_clean(){
	// Clean up the system
	printf("CLEAN-SUCC\n");
}

npfs_segment segment(unsigned int size, unsigned int b_size, char* buffer){
	// Segment the buffer into blocks
	int buffer_size = b_size;
	int block_size = buffer_size/size + (buffer_size % size != 0);
	printf("BUFFER_SIZE: %d\n", buffer_size);
	printf("BLOCK_SIZE: %d\n", block_size);

	// Sanity check
	if (buffer_size < size) {
		printf("ERROR: Buffer is too small for the slice size\n");
		exit(1);
	}

/*
	int i,j = 0, count = 0, dim = 0;
	for (i = 0; i < buffer_size; i++) {
		if (count == size) {
			count = 0;
			dim += 1;
			j = 0;
		}
		count += 1;
		j += 1;
		file[j][dim] = buffer[i];
		printf("assigned %x to %i in dimension %i\n", file[j][dim], i, dim);
	}
*/
	char* temp_array = malloc(sizeof(char) * size);
	int j = 0,k = 0;
	for(int i = 0; i < b_size; i++){
		temp_array[j] = buffer[i];
		j++;
		if (j == size) {
			j = 0;
			k++;
  		char str[10];
  		sprintf(str, "%d", k);
			int written = 0;
			FILE *f = fopen(str, "wb");
			written = fwrite(temp_array, sizeof(char), sizeof(temp_array), f);
			if (written == 0) {
					printf("Error during writing to file !");
			}

		}
	}

	npfs_segment b_segment;
	// set the slice-size varibale
	b_segment.size = size;
	// slice the buffer into blocks


		return b_segment;
}
void npfs_init(char* file, char* buffer){
	FILE *fp;
	fp = fopen(file, "rb");
	if (fp == NULL) {
		printf("ERROR: File does not exist\n");
		exit(1);
	}
	fseek(fp, 0L, SEEK_END);
  
  // calculating the size of the file
  long int res = ftell(fp);
	printf("FILE SIZE: %ld\n", res);
	rewind(fp); 
	char* file_buffer = (char*) malloc(res);
	fread(file_buffer, res, 1, fp);
	// now run the segment function
	npfs_segment b_segment = segment(100000,res, file_buffer);
	
	fclose(fp);
	for(int i = 0; i < res; i++){
		//printf("%x", file_buffer[i]);
	}
	free(file_buffer);
}
int main(int argc, char *argv[])
{
	npfs_init(argv[1], "Test");
	return 0;
}
