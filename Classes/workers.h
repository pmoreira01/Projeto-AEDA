//
// Created by pedro on 17/11/2020.
//

#ifndef PROJETO_AEDA_WORKERS_H
#define PROJETO_AEDA_WORKERS_H

#include <string>
using namespace std;

class Worker {
protected:
    string name;
    int NIF, years, wage;
public:
    Worker(string n, int N, int w, int y);
    virtual ~Worker(){};
    int getNIF() const;
    int getWage() const;
    int getYears() const;
    virtual void info() const;
    virtual void info(ostream &o) const;
};

class Reception: public Worker {
public:
    Reception(string n, int N, int w, int y);
    void info() const;
    void info(ostream &o) const;
};

class Responsible: public Worker {
    int floor;
public:
    Responsible(string n, int N, int w, int y, int f);
    int getFloor() const;
    void info() const;
    void info(ostream &o) const;
};

class Cleaning: public Worker {
    string shift;
public:
    Cleaning(string n, int N, int w, int y, string s);
    string getShift() const;
    void info() const;
    void info(ostream &o) const;
};

class Manager: public Worker {
    int evaluation;
public:
    Manager(string n, int N, int w, int y, int e);
    int getEvaluation() const;
    void info() const;
    void info(ostream &o) const;
    /*
    -pesquisar funcionarios por cargo e salario
    -filtrar reservas feitas por clientes novos
    -custos e lucro total de funcionamento do hotel
    */
};

#endif //PROJETO_AEDA_WORKERS_H