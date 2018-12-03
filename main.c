#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>
#include <time.h>
#include <string.h>

#include <string.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#include "str.h"
#include "result.h"

#include "utils.h"



// #define PATH "/home/zisis/Desktop/submission/submission/workloads/small/"
#define PATH "/home/panos/Desktop/an_logismikou/submission/workloads/small/"

int main(void){

	//test_case_0
	//Table R
/*	int r_size = 10;
	char R[10] = {'1','a','Z','a','d','d','c','b','G','a'};
	int s_size = 216;
	char S[216] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
		'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
		'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
		'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
		'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','e','t','u','v','w','x','y','z',
		'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','e','t','u','v','w','x','y','z'};

	for(int i=0 ; i<216 ; i++){
		printf("%c ",S[i]);
	}
*/
/*	//test_case_1
	//Table R
	int r_size = 10;
	char R[10] = {'a','a','a','a','d','d','c','b','a','a'};
	int s_size = 72;
	char S[72] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
		'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','e','t','u','v','w','x','y','z'};

	for(int i=0 ; i<72 ; i++){
		printf("%c ",S[i]);
	}*/


	//test_case_2
	//Table R
	int r_size = 16;
	char R[16] = {'0','1','2','3','4','5','6','7','8','9',':',';','<', '=','>','?'};
	int s_size = 16;
	char S[16] = {'9','8','7','6','5','4','3','2','1','0',':',';','<','=','>','?'};


/*	//test_case_7
	//Table R
	int r_size = 20;
	char R[20] = {'0','1','2','3','4','5','6','7','8','9',':',';','<', '=','>','?','a','b','c','='};
	int s_size = 16;
	char S[16] = {'9','8','7','6','5','4','3','2','1','0',':',';','<','=','>','?'};*/


/*	//test_case_3
	int r_size = 92;
	char R[r_size];
	R[0] = '!';
	for(int i=1 ; i<r_size ; i++){
		R[i] = R[i-1]+1;
	} 
	for(int i=0 ; i<r_size ; i++){
		printf("%c ",R[i] );
	}
	printf("\n");

	int s_size = 92;
	char S[s_size];
	S[s_size-1] = '!';
	for(int i=s_size-2 ; i>=0 ; i--){
		S[i] = S[i+1]+1;
	} 
	for(int i=0 ; i<s_size ; i++){
		printf("%c ",S[i]) ;
	}
	printf("\n");*/


	//test_case_3
/*	srand(time(NULL));

	int r_size = 4096;
	char R[r_size];
	for(int i=0 ; i<r_size ; i++){
		R[i] = 'A' + (rand()%26);
	} 
	for(int i=0 ; i<r_size ; i++){
		printf("%c ",R[i] );
	}
	printf("\n");

	int s_size = 4096;
	char S[s_size];
	for(int i=0 ; i<s_size ; i++){
		S[i] = 'A' + (rand()%26);
	} 
	for(int i=0 ; i<s_size ; i++){
		printf("%c ",S[i]) ;
	}
	printf("\n");*/



/*	//test_case_4	//monadiaioi pinakes
	int r_size = 1000;
	char R[r_size];
	for(int i=0 ; i<r_size ; i++){
		R[i] = '1';
	} 
	for(int i=0 ; i<r_size ; i++){
		printf("%c ",R[i] );
	}
	printf("\n");

	int s_size = 200;
	char S[s_size];
	for(int i=0 ; i<s_size ; i++){
		S[i] = '1';
	} 
	for(int i=0 ; i<s_size ; i++){
		printf("%c ",S[i]) ;
	}
	printf("\n");*/


/*	//test_case_5	//perittoi artioi
	int r_size = 5;
	char R[r_size];
	for(int i=0 ; i<r_size ; i++){
		R[i] = '1'+i*2;
	} 
	for(int i=0 ; i<r_size ; i++){
		printf("%c ",R[i] );
	}
	printf("\n");

	int s_size = 5;
	char S[s_size];
	for(int i=0 ; i<s_size ; i++){
		S[i] = '0'+i*2;
	} 
	for(int i=0 ; i<s_size ; i++){
		printf("%c ",S[i]) ;
	}
	printf("\n");*/



/*	//test_case_6  // R==S
	int r_size = 10;
	char R[r_size];
	for(int i=0 ; i<r_size ; i++){
		R[i] = '0'+i;
	} 
	for(int i=0 ; i<r_size ; i++){
		printf("%c ",R[i] );
	}
	printf("\n");

	int s_size = 10;
	char S[s_size];
	for(int i=0 ; i<s_size ; i++){
		S[i] = '0'+i;
	} 
	for(int i=0 ; i<s_size ; i++){
		printf("%c ",S[i]) ;
	}
	printf("\n");*/


/*	//test_case_8
	//Table R
	int r_size = 2;
	char R[2] = {'0','1'};
	int s_size = 16;
	char S[16] = {'9','8','1','6','5','4','3','2','1','1',':',';','<','1','>','1'};
*/



    int i,j;
    result* res;

    struct relation relR;
    relR.num_tuples = r_size;
    relR.tuples = (struct tuple*)malloc(relR.num_tuples*sizeof(struct tuple));
    for (i = 0; i < relR.num_tuples; i++){
    	relR.tuples[i].key = i+1;
    	relR.tuples[i].payload = R[i];
    }

    struct relation relS;
    relS.num_tuples = s_size;
    relS.tuples = (struct tuple*)malloc(relS.num_tuples*sizeof(struct tuple));
    for (i = 0; i < relS.num_tuples; i++){
    	relS.tuples[i].key = i+1;
    	relS.tuples[i].payload = S[i];
    }


    //res = RadixHashJoin(&relR, &relS);
    //print_result(res);

    free(relR.tuples);
    free(relS.tuples);

    // free_result(res);

    /*###########################################################################*/
    /*###########################################################################*/
    /*#################                                     #####################*/
    /*#############                                             #################*/
    /*##########             WELCOME   TO   PART 2                 ##############*/
    /*#############                                             #################*/
    /*#################                                     #####################*/
    /*###########################################################################*/
    /*###########################################################################*/

    FILE *file;

	char  ch;
	// int i;
	int num_of_files = 0;
	char **files;
	char nl = '\n';
	size_t size = 5;

	char file_init[100];
	
	strcpy(file_init, PATH);
	strcat(file_init, "small.init");


	if((file = fopen(file_init, "r")) == NULL){
		printf("Error opening the file!\n");
		exit(-1);
	}

	while((ch = fgetc(file)) != EOF){
		if(ch == '\n')
			num_of_files++;
	}
	printf("Num of files: %d\n", num_of_files);	

	///////////////////////malloc checking?
	files = (char **)malloc(num_of_files * sizeof(char *));
	for(i = 0; i < num_of_files; i++){
		files[i] = (char*)malloc(size * sizeof(char));
	}
	
	fseek(file, 0, SEEK_SET); //Go to the beginning of the file
	i=0;

	char ptr[size];

	while((fgets(ptr, size, file)) != NULL){
		strcpy(files[i], ptr);
		files[i] = strtok(files[i], &nl);
		i++;
	}

	printf("FILES:\t");	
	for(i = 0; i < num_of_files; i++){
		 printf("%s ", files[i]);
	}
	printf("\n\n");

	fclose(file);

	//info about the relations
	struct file_info info[num_of_files]; 

	char fl[100];
	strcpy(fl, PATH);

	uint64_t **data; //pointers to the data addresses
	data = (uint64_t**)malloc(num_of_files * sizeof(uint64_t*));

	// uint64_t *data = (uint64_t*)mmap(NULL, buf.st_size, PROT_READ, MAP_PRIVATE | MAP_POPULATE, file_no, 0);

	struct stat buf; //struct thats keep information of a file
	int file_no = -1;


	/*Storing relations in memory*/
	for(i = 0; i < num_of_files; i++){
		strcat(fl, files[i]);
		// printf("%s\n", files[i]);
		if((file = fopen(fl, "rb")) == NULL){
			printf("Error opening the file 2!\n");
			exit(-1);
		}
		strcpy(fl,PATH);

		file_no = fileno(file); //return file descriptor of file
		fstat(file_no, &buf);	//return file information inside buf

		//store the relation into the memory
		data[i] = (uint64_t*)mmap(NULL, buf.st_size, PROT_READ, MAP_PRIVATE | MAP_POPULATE, file_no, 0);

		//////////////////////////////////////////////
		//keep metadata for the relations
		info[i].num_tup = *data[i];
		info[i].num_col = *(data[i]+1);
		create_col_array(&info[i], data[i]);

		// printf("#####>%llu, %llu\n", info[i].num_tup, info[i].num_col);
		// printf("\n%s\tTuples: %llu\t -Columns: %llu\n", files[i], info[i].num_tup, info[i].num_col);
		printf("\n%s\tTuples: %lu\t -Columns: %lu\n", files[i], info[i].num_tup, info[i].num_col);

		fclose(file);
	}
	//////////////////////////////

	
	// fclose(file);
/*	printf("------------------------------------------------\n");
	for(i = 0; i < num_of_files; i++){

		printf("1.%llu\t", *info[i].col_array[0]);
		printf("2.%llu\t", *info[i].col_array[1]);
		printf("3.%llu\n", *info[i].col_array[2]);

	}
	printf("------------------------------------------------\n");*/



	FILE *work_fp;
	char file_path[100];
	
	strcpy(file_path, PATH);
	strcat(file_path, "small.work");


	if((work_fp = fopen(file_path, "r")) == NULL){
		printf("Error opening the file!\n");
		exit(-1);
	}


	char *query;
	size_t len=0;
	ssize_t read;

	struct query_info temp_q;
	char *temp_rel;
	char *temp_col;
	char *c_token;
	char temp_pred[20];	// xrhsimopoieitai gia thn klhsh thw insert pred

	int query_len=0;
	int field=0;	// 0 gia ti sxesei, 1 predicates, 2 provoles
	int relations_count=1;	// poses relations xrhsimopoiountai
	int columns_to_print_count=1;	// plithos provolwn
	int pred_count=1; // plithos predicates

	while ((read = getline(&query, &len, work_fp)) !=-1 ){
		if(strcmp(query,"F\n")==0){		// stamataei otan diavasei F
			break;
		}
		query[strlen(query)-1]='\0';
		query_len = strlen(query);

		for(i=0 ; i<query_len ; i++){
			if(query[i]=='|'){
				field++;
			}
			else if(query[i]==' '){
				if(field==0){
					relations_count++;
				}
				else if(field==2){
					columns_to_print_count++;
				}
			}
			else if(query[i]=='&'){
				pred_count++;
			}
		}

		printf("%s\n",query);
		// printf("relations %d\n",relations_count);
		// printf("columns_to_print_count %d\n",columns_to_print_count);
		// printf("pred_count %d\n",pred_count);

		temp_q.rel_count = relations_count;
		temp_q.pred_count = pred_count;
		temp_q.cols_count = columns_to_print_count;
		temp_q.rels = (uint64_t*)malloc(relations_count*sizeof(uint64_t));
		temp_q.preds = (struct predicate*)malloc(pred_count*sizeof(struct predicate));
		temp_q.cols_to_print = (struct rel_col_tuple*)malloc(columns_to_print_count*sizeof(struct rel_col_tuple));

// relations
		i=0;
		temp_rel = strtok(query," ");
		// printf("(%d)%s-",i,temp_rel);
		temp_q.rels[i] = atoi(temp_rel);
		for(i=1 ; i<relations_count ; i++){
			if(i==relations_count-1){
				temp_rel = strtok(NULL,"|");
				// printf("(%d)%s\n",i,temp_rel);
			}
			else{
				temp_rel = strtok(NULL," ");
				// printf("(%d)%s-",i,temp_rel);
			}
			temp_q.rels[i] = atoi(temp_rel);
		}

// predicates
		for(i=0 ; i<pred_count ; i++){
			if(i==relations_count-1){
				temp_rel = strtok(NULL,"|");
				// printf("(%d)%s\n",i,temp_rel);
			}
			else{
				temp_rel = strtok(NULL,"&");
				// printf("(%d)%s\n",i,temp_rel);
			}
			strcpy(temp_pred, temp_rel);	// stelnw auto sthn insert logw problhmatos me strtok()
			insert_pred(&temp_q, temp_pred, i);
			
		}

// columns
		for(i=0 ; i<columns_to_print_count ; i++){
			temp_col = strtok(NULL,".");
			// printf("(%d)%s-",i,temp_col);
			temp_q.cols_to_print[i].rel = atoi(temp_col);
			temp_col = strtok(NULL," ");
			temp_q.cols_to_print[i].col  = atoi(temp_col);
			// printf("(%d)%s ",i,temp_col);
		}

		print_query_info(&temp_q);
		printf("\n");

		field=0;
		relations_count=1;
		columns_to_print_count=1;
		pred_count=1;

	// break;	//gia debbug mono gia to prwto predicate
	}

	fclose(work_fp);


	/*Free*/
	free(data);

	for(i = 0; i < num_of_files; i++){
		free(info[i].col_array);
	}
	for(i=0; i < num_of_files; i++){
		free(files[i]);
	}
	free(files);

    printf("End of Program.\n");
	return 0;
}

