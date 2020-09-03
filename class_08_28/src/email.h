#ifndef EMAIL_H
#define EMAIL_H
#include<string>
using namespace std;
class Email{
    private:
        string endereco;
    public:
        void set_endereco(const string &);
        string get_endereco();
};
#endif