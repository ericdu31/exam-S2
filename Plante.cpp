#ifndef PLANTE_CPP
#define PLANTE_CPP

#include "Plante.h"


/*mon bute est le joueur rester vers les 50 sur ses stats */

    int _soif ; int _taille ; int _sante ;int _boost ;int _hauteur ;
  

    void plante::coupe(){
        _taille-=10;
        if(_taille<0) _taille=0;
        _soif+=20;
        _sante+=10;
        if(_taille<40)_sante- 10;
        if(_taille>60)_sante- 10;
    }
    
    void plante::soif(){
        _soif+=10;
        if(_soif<0) _soif=0;
        _taille+=20;
        _sante+=10;
        if(_soif<40)_sante- 10;
        if(_soif>60)_sante- 10;
    }
    
    
    
    // si vous le mettez en commentaire le bug disparai c'est magique XD
    
    void plante::_sante(){
        if(_sante<25)     _hauteur- 10;
        if(_sante>25&&<50)_hauteur-  5;
        if(_sante>50&&<75)_hauteur+  5;
        if(_sante>75&&==100)_hauteur+ 10;
        
    }
    
    
    
    
    
    #endif