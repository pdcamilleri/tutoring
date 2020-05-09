hash - turn some data into a number using some algorithm.
     - ideally the hash algorithm will be as random as possible, over the range defined
        so that hashed values will be equally distributed over the range

hash collisions (bad)

Creation
To ensure we have a hashmap which can be used with any kind of hashing function and that we have a comparison function and destruction function for complex objects. The hash function will not involve the compression component, you will need to compress the hash to fit your implementation. If the hash, cmp or destruction function pointers are NULL, this function should return NULL.
/**
 * Creates a new hash map with an associated hash function,
 * comparison function and destructor function.
 */
struct hashmap* hash_map_new(size_t (*hash)(void*), int (*cmp)(void*,void*),
    void (*key_destruct)(void*), void (*value_destruct)(void*));
Put
The put functions will insert a key and value into the hashmap, in the event the key exists within the hashmap, the value will be replaced, since the data structure owns the data, you will need to free the data. It is recommended you record the size variable with the entry.
/**
 * Puts an entry in the hashmap, associating a key with a value
 * If the key does not exists, a new entry should be created and the key
 * and value assumed to be owned by the hash map.
 * If an entry exists, old entry should be removed (hash_map_remove_entry).
 */
void hash_map_put_entry_move(struct hash_map* map, void* k, void* v);
Remove
If the key exists with the hashmap, it will be removed as well as a the value, if the key does not exist, nothing will be removed.
/**
 * Your hash map must remove an entry from the hash map using the key
 * If the key is not present in this map, the function will not make
 * any changes to the hash map.
 * If the key exists, it will remove the entry and value from the
 *
 */
void hash_map_remove_entry(struct hash_map* map, void* k);
Get
Your hashmap should retrieve the value given the key. In the event the key does not exist, your function should return NULL.
/**
 * This will retrieve an entry based on the key within the map itself
 * It will return a reference of that key so it can be modified in place.
 * Note: Since the access of the reference is in a separate context
 * any modifications through the returned object will not be MT-Safe.
 */
void* hash_map_get_value_ref(struct hash_map* map, void* k);
Destroy
This will destroy the current entries and the map itself. The destruct function will be called on each object to ensure that it is freed.
/**
 * Destroys all entries within the hash map, using the destructor function
 * It will also free the map after all entries have been removed.
 * If the map is NULL, nothing will occur.
 */
void hash_map_destroy(struct hash_map* map);


hashmap = [] (internal array has 100 values)
hashmap[0] = 'mars'
hashmap[1] = 'dog'

hashmap['planet'] = 'mars'
        hash('planet') => 45
        internal_array[45] => 'mars'
hashmap[animal] = 'dog'
        hash(animal) => 22
        internal_array[22] => 'dog'
hashmap['planet'] = 'earth'
        hash('planet') => 45
        internal_array[45] => 'earth'


hashmap['planet']
hash('planet') => 45, internal_array[45] => return 'mars'

key   |   value
'planet' => 'mars'
animal => 'dog'

lookup = O(1) constant.

// hash collision strategy (?)
(1-100) => 2 planets. "tree", "oak"
hashmap['tree'] = 'mars'
    hash('tree') => 45 // hash collision (bad)
    internal_array[45] => 'mars'


[ , , , , , , , , , , , , , , , , , , , 'dog', , , , , , , , , , , , , , , , , 'mars' , , , , , , , , , , , , ,,]

Open-addressing

one solution
rehashing/double hashing. hash_2('tree') => 77
        get a different hash value

[ , , , , , , , , , , , , , , , , , , , 'dog', , , , , , , , , , , , , , , , , 'mars' , , , , , , , , , , , 'oak', ,,]


another solution
        linear ...

[ , , , , , , , , , , , , , , , , , , , 'dog', , , , , , , , , , , , , , , , , 'mars' , 'oak', , , , , , , , , , , ,,]


chaining
[ , , , , , , , , , , , , , , , , , , , ['dog'], , , , , , , , , , , , , , , , , ['mars', 'oak'] , , , , , , , , , , , , ,,]


75% full - performance degrades
when 75% full, realloc, double the size of the array, rehash each element.

// this array is 200 elements long, so all keys may need to be rehashed to their correct spot in the larger array
[ , , , , , , , , , , , , , , , , , , , ['dog'], , , , , , , , , , , , , , , , , ['mars', 'oak'] , , , , , , , , ,['oak'] , , , ,,]



cmp function -> use to compare different keys

[ , , , , , , , , , , , , , , , , , , , ['dog'], , , , , , , , , , , , , , , , , ['mars', 'oak'] , , , , , , , , , , , , ,,]

getValue "tree" => we expect 'oak'
        hash("tree" => 45)
        internal_array[45] => [("planet": 'mars'), ("tree": 'oak')]

we want the value associated with "tree" which is "oak"

char* tree = "tree";
char* other = ['t', 'r', 'e', 'e', '\0'];

getValue(tree) => 'oak'
getValue(other) => 'oak'

     cmp => return 0 if the two are the same, otherwise will return 1 or -1 depending on the order.

Thread 1                        Thread 2

hashmap_put("tree", "oak")
                                hashmap_put("planet", "mars")
1
2
                                1
                                2
                                3
3
4
5
                                4
                                5
                                6
6
                                7 write to the list
7  write to the list


e.g. 100 locks would work, but this is not performant.
there is a way to do it smarter.



Thread 1                        Thread 2

                           hashmap_put("tree", "oak")
hashmap_get("tree")
                            1
                            2
1
2
3
                            3
                            4
5
4


e.g. 100 locks would work, but this is not performant.
there is a way to do it smarter.












