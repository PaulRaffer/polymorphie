// ...

gebaeude_verschieben(spielfeld, spieler, spieler.at(s).gebaeude.zentrale, s, v);
gebaeude_verschieben(spielfeld, spieler, spieler.at(s).gebaeude.kanone, s, v);
gebaeude_verschieben(spielfeld, spieler, spieler.at(s).gebaeude.krankenhaus, s, v);
gebaeude_verschieben(spielfeld, spieler, spieler.at(s).gebaeude.geldlager, s, v);
gebaeude_verschieben(spielfeld, spieler, spieler.at(s).gebaeude.mauer, s, v);
gebaeude_verschieben(spielfeld, spieler, spieler.at(s).gebaeude.teleporter, s, v);

// ...

gebaeude_gameover(spielfeld, spieler, spieler.at(sp).gebaeude.kanone, s, sp);
gebaeude_gameover(spielfeld, spieler, spieler.at(sp).gebaeude.krankenhaus, s, sp);
gebaeude_gameover(spielfeld, spieler, spieler.at(sp).gebaeude.geldlager, s, sp);
gebaeude_gameover(spielfeld, spieler, spieler.at(sp).gebaeude.mauer, s, sp);
gebaeude_gameover(spielfeld, spieler, spieler.at(sp).gebaeude.teleporter, s, sp);

// ...
