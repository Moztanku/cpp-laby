
#include<iostream>
#include<string>
#include"Figury.hpp"

int main(int argc,char* argv[]) {
    std::string figury = argv[1];
    int index = 2;
    try{
        for(char c : figury){
            switch(c){
                case 'c':{
                    if(index > argc-4)
                        throw("Za malo argumentow.");
                    double parametry[] = {1.0,1.0,1.0,1.0,90.0};
                    for(int i=0; i<5;i++)
                        try{
                            double temp = atof(argv[index++]);
                            if(temp<=0.0)
                                throw("Nieprawidlowy argument");
                            parametry[i]=temp;
                            
                        }catch(const char* err_mess){
                            std::cerr << err_mess << std::endl;
                        }
                        if(parametry[0]==parametry[1] && parametry[1]==parametry[2] && parametry[2]==parametry[3]){
                            if(parametry[4]==90.0){
                                Kwadrat figura(parametry[0]);
                                std::cout << "Obwod: " << figura.circumference() << ", Pole: " << figura.area() <<std::endl;
                            }
                            else if(parametry[4]>0.0 && parametry[4]<360.0){
                                Romb figura(parametry[0],parametry[4]);
                                std::cout << "Obwod: " << figura.circumference() << ", Pole: " << figura.area() <<std::endl;
                            }
                            else{
                                //ZŁY KĄT
                                std::cerr << "Podano zly kat" << std::endl;
                            }
                        }else if(parametry[0]==parametry[1] && parametry[2]==parametry[3] && parametry[4]==90.0){
                            //PROSTOKĄT
                                Prostokat figura(parametry[0],parametry[2]);
                                std::cout << "Obwod: " << figura.circumference() << ", Pole: " << figura.area() <<std::endl;
                        }else{
                            std::cerr << "Nieprawidlowa figura" <<std::endl;
                        }
                    break;
                }
                case 'p':{                    
                    if(index > argc)
                        throw("Za malo argumentow.");
                    double parametry = 1.0;
                    try{
                        double temp = atof(argv[index++]);
                            if(temp<=0.0)
                                throw("Nieprawidlowy argument");
                        parametry = temp;
                    }catch(const char* err_mess){
                        std::cerr << err_mess << std::endl;
                    }
                    Pieciokat figura(parametry);
                    std::cout << "Obwod: " << figura.circumference() << ", Pole: " << figura.area() <<std::endl;
                    break;
                }
                case 's':{                    
                    if(index > argc)
                        throw("Za malo argumentow.");
                    double parametry = 1.0;
                    try{
                        double temp = atof(argv[index++]);
                            if(temp<=0.0)
                                throw("Nieprawidlowy argument");
                        parametry = temp;
                    }catch(const char* err_mess){
                        std::cerr << err_mess << std::endl;
                    }
                    Szesciokat figura(parametry);
                    std::cout << "Obwod: " << figura.circumference() << ", Pole: " << figura.area() <<std::endl;
                    break;
                }
                case 'o':{                    
                    if(index > argc)
                        throw("Za malo argumentow.");
                    double parametry = 1.0;
                    try{
                        double temp = atof(argv[index++]);
                            if(temp<=0.0)
                                throw("Nieprawidlowy argument");
                        parametry = temp;
                    }catch(const char* err_mess){
                        std::cerr << err_mess << std::endl;
                    }
                    Kolo figura(parametry);
                    std::cout << "Obwod: " << figura.circumference() << ", Pole: " << figura.area() <<std::endl;
                    break;
                }
                default:{
                    std::cerr << "Wprowadzono nie prawidlowy parametr."<<std::endl;
                    break;
                }
            }
        }
    }catch(const char* err_mess){
        std::cerr << err_mess << std::endl;
    }
};