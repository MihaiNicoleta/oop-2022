#pragma once
#define _CRT_SECURE_NO_WARNINGS
class Student
{
private:
    char nume[256];
    float mate;
    float engleza;
    float istorie;
    float medie;
public:
    void SetName(const char* name);
    const char* GetName() const;
    void SetNotaMate(float nota);
    float  GetNotaMate();
    void SetNotaEngleza(float nota);
    float   GetNotaEngleza ();
    void SetNotaIstorie(float nota);
    float  GetNotaIstorie();
    void SetNotaMedie();
    float  GetNotaMedie();
};
