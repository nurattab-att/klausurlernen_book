#include <sstream>
#inlcude <string>
#include "book.h"
#inlcude <string>
using namespace std;

string Book :: str() const{
    ostringstream oss;
    oss << m_titel << ";" << m_autor << ";" << m_jahr;
    return oss.str();
}


