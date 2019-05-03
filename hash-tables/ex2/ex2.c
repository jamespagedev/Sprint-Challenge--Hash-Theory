#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hashtable.h"
#include "ex2.h"

// Note:
//    I think this problem copied and pasted from the
//    "OneWayFlight" whiteboarding challenge I did last week,
//    so I will be using the same logic here
char **reconstruct_trip(Ticket **tickets, int length)
{
  /* Hash Table Functions
    HashTable     create_hash_table()
    void          hash_table_insert()
    void          hash_table_remove()
    char*         hash_table_retrieve()
    void          destroy_hash_table()
    HashTable     hash_table_resize()
  */
  HashTable *ht = create_hash_table(16);
  char **route = malloc(length * sizeof(char *));

  // YOUR CODE HERE
  // first plug in the values of the source(key) and destination(value) into the hash table
  //    by iterating over the struct tickets
  for (int i = 0; i < length; i++)
  {
    // if the source is "NONE", append the route with your first destination
    if (strcmp(tickets[i]->source, "NONE") == 0)
    {
      route[0] = tickets[i]->destination;
    }
    // else append the pair to the hash table
    else
    {
      hash_table_insert(ht, tickets[i]->source, tickets[i]->destination);
    }
  }

  // iterate through the length of the tickets, and plug in the destinations for the sources matching the route[index]
  //    do this until the destination is "NONE"
  int index = 0;
  while (strcmp(route[index], "NONE") != 0) // O(n)
  {
    route[index + 1] = hash_table_retrieve(ht, route[index]);
    index++;
  }

  // free the memory of the ht and return the route
  destroy_hash_table(ht);
  return route;
}

void print_route(char **route, int length)
{
  for (int i = 0; i < length; i++)
  {
    printf("%s\n", route[i]);
  }
}

#ifndef TESTING
int main(void)
{
  // Short test
  Ticket **tickets = malloc(3 * sizeof(Ticket *));

  Ticket *ticket_1 = malloc(sizeof(Ticket));
  ticket_1->source = "NONE";
  ticket_1->destination = "PDX";
  tickets[0] = ticket_1;

  Ticket *ticket_2 = malloc(sizeof(Ticket));
  ticket_2->source = "PDX";
  ticket_2->destination = "DCA";
  tickets[1] = ticket_2;

  Ticket *ticket_3 = malloc(sizeof(Ticket));
  ticket_3->source = "DCA";
  ticket_3->destination = "NONE";
  tickets[2] = ticket_3;

  print_route(reconstruct_trip(tickets, 3), 3); // PDX, DCA, NONE

  return 0;
}
#endif
