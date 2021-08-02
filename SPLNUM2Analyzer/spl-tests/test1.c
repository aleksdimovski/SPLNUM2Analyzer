
features int[0,1] Encrypt;

int main(int msg ) { 
  int retValue_acc ;

  #if (Encrypt) 
    retValue_acc = 1;
    //return (retValue_acc);
  #else 
    retValue_acc = 2;
    //return (retValue_acc);
  #endif
  return (retValue_acc);

}