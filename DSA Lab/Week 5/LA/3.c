// C program for Sparse Matrix Representation
// using Linked Lists
#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int value;
	int row_position;
	int column_postion;
	struct Node *next;
};

void create_new_node(struct Node** start, int non_zero_element,
					int row_index, int column_index )
{
	struct Node *temp, *r;
	temp = *start;
	if (temp == NULL)
	{
		temp = (struct Node *) malloc (sizeof(struct Node));
		temp->value = non_zero_element;
		temp->row_position = row_index;
		temp->column_postion = column_index;
		temp->next = NULL;
		*start = temp;

	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;

		r = (struct Node *) malloc (sizeof(struct Node));
		r->value = non_zero_element;
		r->row_position = row_index;
		r->column_postion = column_index;
		r->next = NULL;
		temp->next = r;

	}
}

void PrintList(struct Node* start)
{
	struct Node *temp, *r, *s;
	temp = r = s = start;

	printf("row_position: \t");
	while(temp != NULL)
	{

		printf("%d \t", temp->row_position);
		temp = temp->next;
	}
	printf("\n");

	printf("column_postion:\t");
	while(r != NULL)
	{
		printf("%d \t", r->column_postion);
		r = r->next;
	}
	printf("\n");
	printf("Value:  \t");
	while(s != NULL)
	{
		printf("%d \t", s->value);
		s = s->next;
	}
	printf("\n");
}

int main(void)
{
	int m,n;
    printf("Enter the row of matrix : ");
    scanf("%d",&m);
	printf("Enter the column of matrix : ");
    scanf("%d",&n);
    printf("Enter the matrix : \n");
	int sparseMatrix[m][n];
    for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
        {
            scanf("%d",&sparseMatrix[i][j]);
        }
	}
	struct Node* start = NULL;

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (sparseMatrix[i][j] != 0)
				create_new_node(&start, sparseMatrix[i][j], i, j);

	PrintList(start);

	return 0;
}
