    auto stack_string = Stack<std::string>{}; // Leeren Stack von Strings erzeugen.
    stack_string.push("Hallo, Welt!");        // "Hallo, Welt!\n" auf den Stack legen.
    std::cout                                 // Letztes Element ("Hallo, Welt!")
		<< stack_string.pop() << '\n';        // loeschen und ausgeben.
    std::cout                                 // Ausgeben ob der Stack leer ist.
        << "Der Stack ist "
        << (stack_int.is_empty() ? "" : "nicht ")
        << "leer!\n\n";
