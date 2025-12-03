#pragma once
#include <string>
using namespace std;
class Usuario
{
    string UserID;
    string nombre;
    string email;
    string password;
public:
    Usuario(string id, string nom, string corr, string pass);
    ~Usuario();
    bool login(string corr, string pass);
    void logout();
};