// #include <stdio.h>
// #include <stdlib.h>

// struct Country {
//     char name[20];
// };

// struct Address {
//     char city[20];
//     int zip;
// };

// struct Person {
//     char name[20];
//     int age;
//     struct Address *addr;  // Pointer to nested struct
// };

// // Function to assign values
// void setPerson(struct Person *p, char *name, int age, char *city, int zip) {
//     snprintf(p->name, sizeof(p->name), "%s", name);
//     p->age = age;
//     snprintf(p->addr->city, sizeof(p->addr->city), "%s", city);
//     p->addr->zip = zip;
// }

// int main() {
//     struct Person p1;
//     struct Address addr1 = {"Los Angeles", 90001};
//     printf("addr1: City: %s, ZIP: %d\n", addr1.city, addr1.zip);
//     //assign array of char
//     snprintf(addr1.city, sizeof(addr1.city), "Ho Chi Minh");
//     addr1.zip = 70000;

//     p1.addr = &addr1; // Assign address of nested struct
//     snprintf(p1.name, sizeof(p1.name), "Bob");
//     p1.age = 30;

//     printf("Name: %s, Age: %d\n", p1.name, p1.age);
//     printf("p1.addr: City: %s, ZIP: %d\n", p1.addr->city, p1.addr->zip);


//     //
//     printf("Using malloc ----------------------------------------------------\n");
//     struct Person *p2 = (struct Person *)malloc(sizeof(struct Person));
//     p2->addr = (struct Address *)malloc(sizeof(struct Address));

//     // Assign values
//     snprintf(p2->name, sizeof(p2->name), "Charlie");
//     p2->age = 40;
//     snprintf(p2->addr->city, sizeof(p2->addr->city), "Chicago");
//     p2->addr->zip = 60601;

//     printf("p2 Name: %s, Age: %d\n", p2->name, p2->age);
//     printf("p2 City: %s, ZIP: %d\n", p2->addr->city, p2->addr->zip);

//     // Free memory
//     free(p2->addr);
//     free(p2);

//     printf("Multi-level struct ----------------------------------------------\n");
//     struct Person p3;
//     setPerson(&p3, "Charlie", 40, "Chicago", 60601);
    
//     printf("p3 Name: %s, Age: %d\n", p3.name, p3.age);
//     printf("p3 City: %s, ZIP: %d\n", p3.addr->city, p3.addr->zip);

//     return 0;
// }

#include <stdio.h>

struct Address {
    char city[20];
    int zip;
};

struct Person {
    char name[20];
    int age;
    struct Address addr;
};

// Function to assign values
void setPerson(struct Person *p, char *name, int age, char *city, int zip) {
    snprintf(p->name, sizeof(p->name), "%s", name);
    p->age = age;
    snprintf(p->addr.city, sizeof(p->addr.city), "%s", city);
    p->addr.zip = zip;
}

int main() {
    struct Person p1;
    setPerson(&p1, "Charlie", 40, "Chicago", 60601);

    printf("Name: %s, Age: %d\n", p1.name, p1.age);
    printf("City: %s, ZIP: %d\n", p1.addr.city, p1.addr.zip);

    return 0;
}
