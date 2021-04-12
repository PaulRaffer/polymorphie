    auto stack_string = Stack</*???*/>{}; // Leeren Stack von beliebigem Tpy erzeugen.
    stack_string.push(/*???*/);           // Wert auf den Stack legen.
    std::cout                             // Letztes Element loeschen und ausgeben.
		<< stack_string.pop() << '\n';
    std::cout                             // Ausgeben ob der Stack leer ist.
        << "Der Stack ist "
        << (stack_int.is_empty() ? "" : "nicht ")
        << "leer!\n\n";
}
