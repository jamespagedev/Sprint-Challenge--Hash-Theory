#include <stdio.h>
#include <stdlib.h>
#include "hashtable.h"
#include "ex1.h"

// Note: this problem is very simular to the
//    "IntegerPairs" whiteboarding challenge I did yesterday,
//    so I will be using the same logic here
Answer *get_indices_of_item_weights(int *weights, int length, int limit)
{
  // pre-condition: if weights has duplicate number, they must sum to the limit
  // time compleixty = O(n) (worst case), O(n - k) (average case), O(1) (best case)
  //    'k' is a value found in the parameter

  /* Hash Table Functions
  HashTable     create_hash_table()
  void          hash_table_insert()
  void          hash_table_remove()
  int           hash_table_retrieve()
  void          destroy_hash_table()
  HashTable     hash_table_resize()
  */
  // YOUR CODE HERE
  // first, if length is <= 1... return NULL
  if (length <= 1)
  {
    return NULL;
  }

  // instantiate empty hash table to store keys for O(1) runtime on lookup for the weight
  HashTable *ht = create_hash_table(16);
  // initialize Answer as NULL for default return if pairs not found.
  Answer *answer = NULL; // Initialize for default return

  // loop through length of weights
  for (int i = 0; i < length; i++) // O(n) Runtime
  {
    //    instantiate key_in_check = limit - current_weight
    int key_in_check = limit - weights[i];
    //    if key_in_check is not in the ht, add current_weight as new_key to hash table with the current index in loop as the value
    if (hash_table_retrieve(ht, key_in_check) == -1) // O(n) Runtime
    {
      hash_table_insert(ht, weights[i], i);
    }
    //    else pair has been found (note: key_in_check + weights[i] = limit)
    else
    {
      // put answer on the heap to store the found pair
      answer = malloc(sizeof(Answer));
      answer->index_1 = i;
      answer->index_2 = hash_table_retrieve(ht, key_in_check);
      //    destroy the hash table and return answer
      destroy_hash_table(ht);
      return answer;
    }
  }

  // destroy the hash table and return default answer
  destroy_hash_table(ht);
  return answer;
}

void print_answer(Answer *answer)
{
  if (answer != NULL)
  {
    printf("%d %d\n", answer->index_1, answer->index_2);
  }
  else
  {
    printf("NULL\n");
  }
}

#ifndef TESTING
int main(void)
{

  // TEST 1
  int weights_1 = {9};
  Answer *answer_1 = get_indices_of_item_weights(&weights_1, 1, 9);
  print_answer(answer_1); // NULL
  // since we used malloc for the Answer instantiation... free the memory
  if (answer_1 != NULL)
  {
    free(answer_1);
    answer_1 = NULL;
  }

  // TEST 2
  int weights_2[] = {4, 4};
  Answer *answer_2 = get_indices_of_item_weights(weights_2, 2, 8);
  print_answer(answer_2); // {1, 0}
  if (answer_2 != NULL)
  {
    free(answer_2);
    answer_2 = NULL;
  }

  // TEST 3
  int weights_3[] = {4, 6, 10, 15, 16};
  Answer *answer_3 = get_indices_of_item_weights(weights_3, 5, 21);
  print_answer(answer_3); // {3, 1}
  if (answer_3 != NULL)
  {
    free(answer_3);
    answer_3 = NULL;
  }

  // TEST 4
  int weights_4[] = {12, 6, 7, 14, 19, 3, 0, 25, 40};
  Answer *answer_4 = get_indices_of_item_weights(weights_4, 9, 7);
  print_answer(answer_4); // {6, 2}
  if (answer_4 != NULL)
  {
    free(answer_4);
    answer_4 = NULL;
  }

  return 0;
}
#endif
