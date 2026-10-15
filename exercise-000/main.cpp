#include <fmt/chrono.h>
#include <fmt/format.h>

#include "config.h"
void changeValueByParameter(int value) {
    value = 99;
    fmt::print("Wert innerhalb der function: {}\n", value);
}
void changeValueByPointer(int* value) {
    *value = 99;
    fmt::print("Wert innerhalb der Ptr funciton: {}\n", *value);
}

int main(int argc, char **argv) {

    
    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/12.0/api/
     */
    
    // Aufgabe 1
    int x = 10;
    int *p;
    p = &x;
    fmt::print("Hello, {}!\n", tea::PROJECT_NAME);
    fmt::print("Der Wert der val x ist: {}\n", x);
    fmt::print("Die Adresse von x ist: {}\n", fmt::ptr(&x));
    fmt::print("Der Wert in p ist: {}\n", *p);
    fmt::print("Die Adresse in p ist: {}\n", fmt::ptr(p));
    *p = 42;
    fmt::print("Der neue Wert von x ist: {} über x: {}\n", *p, x);
    
    // Aufgabe 2

    double *pd;
    pd = new double (3.1415);
    fmt::print("Der Wert vom double ist: {}, die Adresse vom double ist: {}\n", *pd, fmt::ptr(pd));
    delete pd;

    // Aufgabe 3

    int y = 7;
    changeValueByParameter(y);
    fmt::print("Wert nach der function: {}\n", y);
    int *ptr = &y;
    changeValueByPointer(ptr);
    fmt::print("Wert nach der Ptr function: {}\n", y);



    return 0; /* exit gracefully*/
}
