# Resume

## Data Structures

Data structure is a way to retain information into your program "memory" and organize that you can access when calculing. Usually data structures try to balance costs to access/manipulate some block of data.

malloc and array is primarly equal because both allocate chunk of memory

Array: Good for indexes and fast access position, is a piece ou memory previously allocated and addressed
In Arrays:

- Insertions is bad - lot of shifting to fit an element in the middle
- Deletion is bad - lot of shifting after removing an element
- Lookup is great - random access, constant time
- Relatively easy to sort
- Relatively small size-wise
- Stuck with a fixed size, no flexibility

Linked list: Different address of memory linked by their pointer. List give dynamism but you lost index access and some type of searchs.

Remember to always keep track of the head element of a linked list. It's the only way you can "navigate" into your list.

Add to the beginning of a list is always easy. You dont need to go n elements until find null pointer

When you need to destroy a list use a recursion coming to the end from head deleting all nodes. Remember, if you lose head you cannot access other nodes.

list = null
list -> next -> node

node -> number = 1

node -> next = null

n->number
n->pointer

There's always a price you pay between space and time in programming, you need to choose accordingly to you problem.

In Linked Lists:

- Insertion is easy - just tack onto te front
- Deletion is east - once you find the element
- Lookup is bad - have to rely on linear search
- Relatively difficult to short - unless you're willing to comprmise on super-fast insertion and instead sort as you construct
- Relatively small size-wise (not as small as arrays)

Tree: In a tree you have a root that is your entry point inyo the list and usually two nodes, left/right, both pointing to smaller/greather values that you can follow in some search for example.

Some type of structure that you can display a array in a similar bidimensional data structure to access data in a differente way, acessing like pointers into lists.

Hash table: Is a data structure that combine a linked list and a array inside of it. You need to be cautious about colisions in hash table, it's easy to mess up some data colision and crete unbalanced structure.

When building hash tables is ideally you don't need the data in some of sorted order

Hash can have two types of add data approachs, Chaining and Linear Probing. Most of time you use Chaining, but is good to know about another methods.

In Hash tables:

- Insertion is a two-steps process - hash, then add
- Deletion is esay - once you find the element
- Lookup is on average better than with linked lists because you have the benefit of a real world constant factor
- Not an ideal data structure if sorting is the goal - just use an array
- Can run the gamut of size

Tries: Some data structure than sacrifice memory to gain running time, creating a array meshed with a tree linking each value in a root nodes.

In Tries:

- Insertion is complex - a lot of dynamic memory allocation, but gets easier as you go
- Deletion is easy - just free a node
- Lookup is fast - not quite fast as an array, but almost
- Already sorted - sort as you build in almost all situations
  Rapidly bcomes huge, event with very little data present, not great if space is at a premium
- A tree made by arrays

Queues: First In, First Out. FIFO.

Stacks: LIFO. Last in, First out.

Push is add a element into a structure. Pop is remove a element.

Dictionarie: Is a abstraction of a hash table. Key and values to map one thing to another.

Everytime when working with data whe use a key to point where the data is and this data has a value stored. It differ on each type of data are you working
