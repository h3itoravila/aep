// int main irá verificar imparidade
int fatorialDuplo(int numRecebido){
    if(numRecebido == 1)
      return 1;
    else
      return numRecebido * fatorialDuplo(numRecebido-2);    
}
