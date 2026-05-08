// C Program to demonstrate the structure padding property 
#include <stdio.h> 

// Alignment requirements 
// (typical 32 bit machine) 

// char     1 byte 
// short int  2 bytes 
// int     4 bytes 
// double    8 bytes 

// structure A 
typedef struct structa_tag { 
	char c; 
	short int s; 
} structa_t; 

// structure B 
typedef struct structb_tag { 
	short int s; 
	char c; 
	int i; 
} structb_t; 

// structure C 
typedef struct structc_tag { 
	char c; 
	double d; 
	int s; 
} structc_t; 

// structure D 
typedef struct structd_tag { 
	double d; 
	int s; 
	char c; 
} structd_t; 

/* Using Pragma to optimize structure padding */
#pragma pack(1) //denotes 1 byte pragma boundary
// structure A 
typedef struct structaoptimized_tag {
	char c;
	short int s;
} structaoptimized_t;

// structure B 
typedef struct structboptimized_tag {
	short int s;
	char c;
	int i;
} structboptimized_t;

// structure C 
typedef struct structcoptimized_tag {
	char c;
	double d;
	int s;
} structcoptimized_t;

// structure D 
typedef struct structdoptimized_tag {
	double d;
	int s;
	char c;
} structdoptimized_t;

int main() 
{ 
	printf("sizeof(structa_t) = %lu\n", sizeof(structa_t));
	printf("sizeof(structb_t) = %lu\n", sizeof(structb_t));
	printf("sizeof(structc_t) = %lu\n", sizeof(structc_t));
	printf("sizeof(structd_t) = %lu\n", sizeof(structd_t));

	printf("sizeof(structaoptimized_t) = %lu\n", sizeof(structaoptimized_t));
	printf("sizeof(structboptimized_t) = %lu\n", sizeof(structboptimized_t));
	printf("sizeof(structcoptimized_t) = %lu\n", sizeof(structcoptimized_t));
	printf("sizeof(structdoptimized_t) = %lu\n", sizeof(structdoptimized_t));
	return 0; 
}
