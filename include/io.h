#ifndef IO__H
#define IO__H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "types.h"

#define INPUT_FILE_FIELDS 6
#define BUFFER_SIZE		1000

typedef enum {
	POS_ID_TRANSACTION,
	POS_USER_ID,
	POS_TRANSACTION_DATE,
	POS_AMOUNT,
	POS_CARD_NUMBER,
	POS_DESC
} csv_pos_t;

status_t tmp_gen(cla_t cla, FILE **bfp);
status_t set_data(user_t *user, char **data);
status_t tmp_sort(FILE *tmp);

status_t split(char *s, char **data);

status_t export_data(cla_t cla, FILE *bfp);

#endif
