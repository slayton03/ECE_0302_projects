#include "bitset.hpp"

// TODO
Bitset::Bitset(){

  isValid=true;
  
  arraySize=8;
  
  bitarray = new intmax_t[arraySize];
  
  for(int i=0;i<arraySize;i++){
    bitarray[i]=0;
  }

}

Bitset::Bitset(intmax_t size){

  isValid=true;
  
  if(arraySize<=0){
    isValid=false;
    bitarray=0;
    return;
  }
  
  arraySize=size;
  
  bitarray = new intmax_t[arraySize];
  
  for(int i=0;i<arraySize;i++){
    bitarray[i]=0;
  }
  
}

Bitset::Bitset(const std::string & value){

  isValid=true;
  
  //Ask about how to read string and how this one works
  
  arraySize=value.length();
  
  for(int i;i<arraySize;i++){
    
  }
  
  bitarray = new intmax_t[arraySize];
  
  for(int i;i<arraySize;i++){
    
    bitarray[i]=value[i]-'0';
    
  }
  
}

intmax_t Bitset::size() const{
  return arraySize;
}

bool Bitset::good() const{
  return isValid;
}

void Bitset::set(intmax_t index){
  
  bitarray[index]=1;
  
  if(index<0 || index>=arraySize){
    isValid=false;
  }
  
}

void Bitset::reset(intmax_t index){
  
  bitarray[index]=0;
  
  if(index<0 || index>=arraySize){
    isValid=false;
  }
  
}

void Bitset::toggle(intmax_t index){
  
  if(bitarray[index]==1){
    bitarray[index]=0;
  }
  else{
    bitarray[index]=1;
  }
  
  if(index<0 || index>=arraySize){
    isValid=false;
  }
  
}

bool Bitset::test(intmax_t index){

  if(index<0 || index>=arraySize){
    isValid=false;
    return false;
  }
  
  if(bitarray[index]==1){
    return true;
  }
  else{
    return false;
  }

}

std::string Bitset::asString() const{

  //Ask TA
  
  string stringx;
  
  stringx+=to_string(bitarray[i])

}

Bitset::~Bitset(){

  delete [] bitarray;

}





