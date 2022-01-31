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
  
  arraySize=value.length();
  
  for(int i=0;i<arraySize;i++){
  
    if(value[i]=='0' || value[i]=='1'){
      
    }
    else{
      bitarray=0;
      isValid=false;
      return;
    }
    
  }
  
  
  bitarray = new intmax_t[arraySize];
  
  for(int i=0;i<arraySize;i++){
    
    if(value[i]=='0'){
      bitarray[i]=0;
    }
    else if(value[i]=='1'){
      bitarray[i]=1;
    }
    
  }
  
  isValid=true;
  
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
  
  std::string stringx;
  
  for(int i=0;i<arraySize;i++){
  
      stringx+=std::to_string(bitarray[i]);
      
  }
  
  return stringx;

}

Bitset::~Bitset(){

  delete [] bitarray;

}





