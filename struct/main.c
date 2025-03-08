/*
* @Author: Quynh Do-Ngoc
* @Date:   2025/03/04 20:58
* @Last Modified by:   vbe_quynhdon
* @Last Modified time: 2025/03/08 12:04
*/
#include <stdio.h>
#include "struct.h"

/*
at the struct declartion        , use "."   : emp.name
when assign as argument pointer , use "->"  : emp->name
*/

int change_id(struct Employee *member){
    printf("ID old: %d\n", member->id);
    member->id = 123;
    printf("ID new: %d\n", member->id);

    return 0;
}

int change_zip(struct Employee *member){
    printf("ZIP old: %d\n", member->addr->zip); //as argument pointer
    member->addr->zip = 70006;
    printf("ZIP new: %d\n", member->addr->zip);

    return 0;
}


int main() {
    struct Employee emp;
    struct Address addr = {"Ho Chi Minh", 70001};

    emp.addr = &addr;  // Assign pointer
    snprintf(emp.name, sizeof(emp.name), "Quynh");
    emp.id = 103;

    printf("Employee: %s (ID: %d)\n", emp.name, emp.id);  //as var declartion
    printf("Address: %s, ZIP: %d\n", emp.addr->city, emp.addr->zip);

    int ret;
    ret = change_id(&emp);
    if (ret){
        printf("change_id error!!!\n");
    }

    printf("Employee: %s (ID: %d)\n", emp.name, emp.id);
    printf("Address: %s, ZIP: %d\n", emp.addr->city, emp.addr->zip);


    ret = change_zip(&emp);
    if (ret){
        printf("change_zip error!!!\n");
    }

    printf("Employee: %s (ID: %d)\n", emp.name, emp.id);
    printf("Address: %s, ZIP: %d\n", emp.addr->city, emp.addr->zip);

    return 0;
}
