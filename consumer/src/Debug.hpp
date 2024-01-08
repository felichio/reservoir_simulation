
#ifdef DEBUG
#define DEBUG_CON 1
#else
#define DEBUG_CON 0
#endif



#define debug_print(str) \
    do {if (DEBUG_CON) std::cout << str << std::endl; } while (0)

