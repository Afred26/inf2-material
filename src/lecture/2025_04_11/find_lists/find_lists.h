#ifndef FIND_LISTS_H
#define FIND_LISTS_H

#include <vector>
#include <string>

/// Sucht ein Element in list und liefert dessen Position.
/// Liefert die Länge der Liste, falls das Element nicht
/// enthalten ist.
int find_element(std::vector<int> list, int el);


/// Sucht ein Element in names und liefert dessen Position.
/// Liefert die Länge der Liste, falls das Element nicht enthalten ist.
int find_element(std::vector<std::string> names, std::string name);


/// Sucht ein Element in names und liefert das entsprechende
/// Element aus fees. Liefert -1, falls kein Element in names gefunden wurde.
int lookup_fee(std::string name, std::vector<std::string> names,
    std::vector<int> fees);

#endif
