#include<stdio.h>

class A{
  public: void m(void){
            printf("Soy A!\n");
          }
}

class B: virtual public A{
  public:  void mb(void){
             printf("Soy B!\n");
           }
}

class C: virtual public A{
  public:  void mc(void){
             printf("Soy C!\n");
           }
}

class D: public B, public C, virtual public A{
  public: void md(void){
            printf("Soy D!\n");
          }
}


int main(){
  D *d = new D();
  d->m();
  d->mb();
  d->mc();
  d->md();
  return 0;
}
