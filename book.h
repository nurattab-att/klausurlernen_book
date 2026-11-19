#pragma once
#include <string>
using namespace std;

class Book {
private:
    string m_autor;
    string m_titel;
    int m_jahr;

public: Book() : m_autor(" "), m_titel(" "), m_jahr(0) {}
    Book (const string& titel, const string& autor, int jahr)
        : m_autor(autor), m_titel(titel), m_jahr(jahr) {}
    string getTitel() const { return m_titel; }
    void setTitel (const string& titel) {m_titel = titel; }

    string getAutor() const {return m_autor; }
    void setAutor (const string& autor) {m_autor = autor; }

    int getJahr() const { return m_jahr; }
    void setJahr(int jahr) {m_jahr = jahr; }
};

