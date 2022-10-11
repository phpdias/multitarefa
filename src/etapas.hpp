#ifndef ETAPAS_HPP
#define ETAPAS_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <unordered_map>
#include <vector>

using namespace std;

void menu();

void tokenizar(string text, unordered_map<string, vector<int>> *mapa, int linha);

void tokenizar_etapaII(string text, unordered_map<int, vector<string>> *mapa, int linha);

void etapaI(unordered_map<string, vector<int>> *mapa_d);

void etapaII(unordered_map<string, vector<int>> *mapa_d);

void etapaIII(unordered_map<string, vector<int>> *mapa_d, unordered_map<int, vector<string>> *mapa_t_reduzido_permutacao);

void permutacao(unordered_map<int, vector<string>> *mapa_t_reduzido_permutacao,vector <string> vaux, int linha);

#endif