#include <cstring>
#ifndef INFO_H
#define INFO_H

class contactInfo{

    private:
        char *name;
        char *phone;
        void initName(char* n){

            name = new char[strlen(n)+1];
            strncpy(name,n,strlen(n)+1);

        }
        void initPhone(char* p){

            phone = new char[strlen(p)+1];
            strncpy(phone,p,strlen(p)+1);

        }
    public:
        contactInfo(){

        }
        contactInfo(char* n, char* p){
            initName(n);
            initPhone(p);
        }
        char* getName() const{
            return name;  
        }
        char* getPhone() const{
            return phone;
        }

};

#endif