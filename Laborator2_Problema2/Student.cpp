// explicitez metodele
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include "Student.h"


void Student::SetName(const char* nume)
{
	strcpy(this->nume, nume);
}
const char* Student::GetName() const {
	return this->nume;
}

void Student::SetNotaMate(float nota)
{
	this->mate = nota;
}

float  Student::GetNotaMate()
{
	return this->mate;
}

void Student::SetNotaEngleza(float nota)
{
	this->engleza = nota;
}

float Student::GetNotaEngleza()
{
	return this->engleza;
}

void Student::SetNotaIstorie(float nota)
{
	this->istorie = nota;
}

float  Student::GetNotaIstorie()
{
	return this->istorie;
}

void Student::SetNotaMedie()
{
	this->medie = (this->mate + this->engleza + this->istorie) / 3;
}

float   Student::GetNotaMedie()
{
	return this->medie;
}

