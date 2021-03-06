// author: Sean Davis
// edited by Ziyue Gao, Chengeng Xiao, Feb. 16, 2016 01:44

#include "instruction2.h"
#include <iostream>
#include <cstring>

using namespace std;

Instruction2::Instruction2() : info(NULL)
{
}  // Instruction()

Instruction2::~Instruction2()
{
  if(info)
    delete [] info;
}  // ~Instruction

int Instruction2::getAddress() const
{
  return address;
} // get()

const char* Instruction2::getInfo() const
{
  return info;
} // get()

void Instruction2::setAddress(int addr)
{
  address = addr;
} // setAddress()

void Instruction2::setInfo(const char* information)
{
  info = new char[strlen(information) + 1];
  strcpy(info, information);
} // setInfo()