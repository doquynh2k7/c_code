struct Address {
    char city[20];
    int zip;
};

struct Employee {
    char name[30];
    int id;
    struct Address *addr;  // Pointer to nested struct
};
