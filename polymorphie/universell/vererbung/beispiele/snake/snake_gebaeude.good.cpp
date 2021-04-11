// ...

for (auto & g : spieler.at(s).gebaeude) {
	// Welchen Typ g hat, und somit auch welche Methode 'verschieben'
	// aufgerufen wird, wird erst zur Laufzeit bestimmt.
	g.verschieben(spielfeld, spieler, s, v);
}

// ...

for (auto & g : spieler.at(sp).gebaeude) {
	g.gameover(spielfeld, spieler, s, sp);
}

// ...
