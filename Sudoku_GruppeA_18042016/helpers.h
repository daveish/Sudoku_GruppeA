#ifndef HELPERS_H
#define HELPERS_H
/*
Autor(en)               : Dominik Elis, Robin Grahl, Dustin Welz, David Fischer,
                          Jennifer Hermanns
Klasse                  : FA11
Programmname            : helpers.h
Datum                   : 20.04.2016
Beschreibung            : Hilfsfunktionen f�r das Sudokuprojekt.
Version                 : 1.0
Compiler                : Visual Studio 2012
*/

/*******************************************************************************
Praeprozessoranweisungen
*******************************************************************************/
#define _CRT_SECURE_NO_DEPRECATE    1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(push, 0)
#include <time.h>
#include <curses.h>
#pragma warning(pop)

/*******************************************************************************
Funktionsprototypen
*******************************************************************************/
int GeneriereSudokuId(int iSchwierigkeit);
int GeneriereZufallszahlReichweite(int iMinimum, int iMaximum);
void EntferneLeerzeichenAusString(char cString[]);
int PruefeAufValideStringlaenge(char cString[],
                                unsigned int uiMindestLaenge,
                                unsigned int uiMaximalLaenge);
void AusgabeFehlermeldungValideTextlaenge(int iFehlerId,
                                          const char ccFeldname[]);
void SpielregelnAnzeigen(void);
void AusgabeAbsoulterPfad(char cAusgabe[], const char ccDateiname[]);

#endif
