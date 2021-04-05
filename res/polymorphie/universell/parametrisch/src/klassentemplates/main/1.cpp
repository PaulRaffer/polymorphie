#include <string>
#include <iostream>
#include "stack.hpp"

auto main() -> int
{
	auto stack_int = Stack<int>{}; // Leeren Stack von Integern erzeugen.
    stack_int.push(42);            // 42 auf den Stack legen.
    std::cout                      // Letztes Element (42) loeschen und ausgeben.
		<< stack_int.pop() << '\n';
    std::cout                      // Ausgeben ob der Stack leer ist.
        << "Der Stack ist "
        << (stack_int.is_empty() ? "" : "nicht ")
        << "leer!\n\n";
