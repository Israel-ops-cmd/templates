#include <iostream>
    #include <locale.h>
    
    using namespace std;
    
    template <typename T>
        T soma(T a, T b){
            return a + b;
        }
    
    template <typename T>
    class Par{
        private:
            T primeiro, segundo;
        public:
            Par(T p, T s){
                primeiro  = p;
                segundo = s;
            }
    
            T soma(){
                return primeiro + segundo;
            }
    
    };
    
    int main(){
        cout << "Hello World!" << endl;
        int x = soma(2, 3);
        cout << x << endl;
        Par <int> inteiro(2,3);
        Par <double> flutuante(2.5, 4.6);
        cout << inteiro.soma() << endl;
        cout << flutuante.soma() << endl;
        return 0;
    }