#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/*information about relations*/
struct file_info {
	uint64_t num_tup;   //number of tuples
	uint64_t num_col;   //number of columns

	uint64_t **col_array; //array of pointers to the columns of the relation

};

struct rel_col_tuple {
	uint64_t rel;   //id of relation
	uint64_t col;	//id of column
};

/*predicate information*/
struct predicate {
	struct rel_col_tuple tuple_1;   // tuple1
	struct rel_col_tuple tuple_2;   // tuple2

	char op;		//operator
	int value;		// -1 se periptvsh pou kai to 2o meros einai tel_col_tuple
};

/*query information*/
struct query_info {
	int rel_count;
	int pred_count;
	int cols_count;

	uint64_t* rels;   						//relations involved in query
	struct predicate* preds;   				//redicates
	struct rel_col_tuple* cols_to_print;	//columns to print
};

void create_col_array(struct file_info* info, uint64_t * data);
void print_query_info(struct query_info* query);
void insert_pred(struct query_info* query, char* pred, int index);
#endif /*utils.h*/

