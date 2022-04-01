/*
 * Network-peer file system
 * headers to transfer and validate files between peers
 * uses a network-peer-to-peer file system
 * and crc32 checksums
 */

#ifndef NPFS_H
#define NPFS_H
#include <stdio.h>
typedef struct{
	int index;
	int jdex;
} npfs_file_t;
typedef struct {
	int size;
	int checksum;
} npfs_segment;
void npfs_clean(void);
npfs_segment segment(unsigned int size, unsigned int b_size, char* buffer); 
void npfs_init(char* file, char* buffer);
int npfs_send(npfs_segment segment);
npfs_file_t npfs_anal(char* data);
#endif
